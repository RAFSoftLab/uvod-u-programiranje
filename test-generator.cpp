/*
	Kod za generisanje random test primera.

	Potrebno je prilagoditi funkciju gen_test kojoj se prosledjuje redni broj
	primera i izlazni stream. Treba podesiti i parametre definisane iznad funkcije.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include <algorithm>
#include <random>

using namespace std;

extern int rand_seed;
mt19937_64 random_generator(rand_seed);


int random_value(int i, int j) {
	uniform_int_distribution<int> dist(i, j);
	return dist(random_generator);
}

int random_index(int j) {
	return random_value(0,j-1);
}

long long random_value(long long i, long long j) {
	uniform_int_distribution<long long> dist(i, j);
	return dist(random_generator);
}

double random_value(double i, double j) {
	uniform_real_distribution<double> dist(i, j);
	return dist(random_generator);
}
int rand_int(int a, int b) {
	return a + rand() % (b - a + 1);
}


extern int test_count;
extern string naziv_zadatka;

void gen_test(int i, ostream &tin);

void gen_tests(string data_folder, int test_count) {
  int mkdirRet = system(("mkdir "+data_folder).c_str());
  for(int i=1;  i <= test_count; i++) {
    ofstream tin;
    stringstream buf;
    buf << setw(2) << setfill('0') << i;
    string file = data_folder + "/" + naziv_zadatka + "_" + buf.str();
    string inFile =  file + ".in";
    tin.open(inFile.c_str());
    gen_test(i, tin);
    tin.close();
    string outFile = file + ".out";
    string command = naziv_zadatka + ".exe" + " < " + inFile + " > " + outFile;
#ifdef __unix__
    command = "./" + command;
#endif
    assert(system(command.c_str()) == 0);
  }
}

int main(int argc, char* argv[]) {
  srand(rand_seed);
  if(argc != 2)
    cerr << "Program ocekuje argumete: <izlazni folder>";
  else
    gen_tests(argv[1], test_count);
}

/*******************************************
 * Iznad je genericki kod koji ce retko trebati da se menja, a
 * ispod je kod koji se prilagodjava konkretnom zadatku
 *******************************************/

int rand_seed = 0;
int test_count = 10;
string naziv_zadatka = "provera_monotonosti";

void gen_test(int i, ostream &tin) {
  int n;
  n=rand_int(1,50);
  tin << n << endl;

  if (i==1) {
    for (int k = 1; k <= n; k++)
      tin << k << endl;
  }
  else if (i==2) {
    int x=random_value(1, 100);
    for (int k = 1; k <= n; k++)
      tin << x << endl;
  } else if (i == 3) {
    tin << 4 << endl;
    tin << 1 << endl << 2 << endl << 3 << endl << 2 << endl;
  } else if (i % 2 == 0) {
    int min, max;
    min = 1; max = 100;
    for (int k = 1; k <= n; k++)
      tin << random_value(min, max) << endl;
  } else {
    int p = 1;
    for (int k = 1; k <= n; k++) {
      p += random_value(1, 3);
      tin << p << endl;
    }
  }
}
