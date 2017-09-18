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
    int n,m,k,num;
    n = argv[1];
    m = argv[2];
    k = argv[3];
    num = argv[4];

    if(num >= n && num <= m && num%k == 0){
        return 1;  // For correct
    }

    return 0;  // For incorrect
}
