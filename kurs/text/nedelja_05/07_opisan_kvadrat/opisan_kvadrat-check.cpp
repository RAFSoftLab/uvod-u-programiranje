/*
    Ako nije dovoljno samo uporediti korisnicki izlaz sa ocekivanim izlazom
    (whitespace karakteri se ignorisu prilikom poredjenja!), zadatak mora da
    sadrzi implementaciju provere.
    Implementacija checker-a (zbog jednostavnosti, u C++)
*/

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int n, c;


int main(int argc, char *argv[])
{
    // Example, but you don't have to use streams!
    ifstream outFile(argv[1]);  // User output
    ifstream solFile(argv[2]);  // Expected output
    ifstream inFile(argv[3]);  // Input

    // Check solution
    inFile >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (!outFile.eof()) {
                outFile >> c;
                if (i == 1 || j == 1 || i == n || j == n) {
                    if (c != '*') {
                        return 0;
                    }
                } else {
                    if (c != ' ') {
                        return 0;
                    }
                }
            } else {
                return 0; // Nema dovoljno karaktera
            }

        }
    }

    outFile.close();
    solFile.close();
    inFile.close();


    return 1;  // Tacno sve
}
