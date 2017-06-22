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

int main(int argc, char *argv[])
{
    // Example, but you don't have to use streams!
    ifstream outFile(argv[1]);  // User output
    ifstream solFile(argv[2]);  // Expected output
    ifstream inFile(argv[3]);  // Input

    // Check solution

    outFile.close();
    solFile.close();
    inFile.close();

    return 0;  // For incorrect
    return 1;  // For correct
}
