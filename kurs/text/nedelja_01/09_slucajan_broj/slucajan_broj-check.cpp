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
    // ifstream solFile(argv[2]);  // Expected output
    ifstream inFile(argv[3]);  // Input

    int n,m,num;
    inFile >> n >> m;
    outFile >> num;

    // Check solution
    outFile.close();
    // solFile.close();
    inFile.close();

    if(num >= n && num <= m){
        return 1;  // For correct
    }

    return 0;  // For incorrect

}
