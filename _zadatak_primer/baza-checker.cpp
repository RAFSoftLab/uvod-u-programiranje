#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

long long N, M, K1, K;
vector<long long> x, y;
vector<pair<long long, long long>> sensors;

long long numOfDist(vector<long long>& a)
{
	sort(a.begin(), a.end());
	long long ret = 1;
	for (int i = 1; i < (int)a.size(); i++)
	{
		if (a[i] != a[i - 1]) ret++;
	}
	return ret;
}

int main(int argc, char *argv[])
{
	ifstream outFile(argv[1]);
	ifstream solFile(argv[2]);
	ifstream inFile(argv[3]);


	inFile >> N >> M;

	// Ucitavanje K iz out i sol
	solFile >> K1;
	if (!outFile.eof())
	{
		outFile >> K;
	}
	else
	{
		return 0; // takmicar nije ispisao nista
	}

	// Slucaj kada resenje ne postoji
	if (K1 == -1LL)
	{
		if (K == -1LL)
		{
			return 0; // takmicar korektno napisao da nema resenja
		}
		else
		{
			return 0; // takmicar prijavio da postoji resenje iako ne postoji
		}
	}

	if (K < 1)
	{
		return 0; // losa vrednost za K
	}

	// Slucaj kada resenje postoji, ucitavamo pozicije iz out fajla
	x.clear();
	y.clear();
	for (long long i = 1LL; i <= K; i++)
	{
		long long X, Y;
		if (!outFile.eof())
		{
			outFile >> X;
			if (!outFile.eof())
			{
				outFile >> Y;
				if (X < 1LL || X > N || Y < 1LL || Y > N)
				{
					return 0; // lose koordinate
				}
				x.push_back(X);
				y.push_back(Y);
				sensors.push_back(make_pair(X, Y));
			}
			else
			{
				return 0; // nema dovoljno brojeva
			}
		}
		else
		{
			return 0; // nema dovoljno brojeva
		}
	}

	// Proveriti da li su sve pozicije razlicite
	sort(sensors.begin(), sensors.end());
	for (int i = 1; i < (int)sensors.size(); i++)
	{
		if (sensors[i] == sensors[i - 1])
		{
			return 0; // postoje dve iste pozcije
		}
	}

	// Odrediti koliko ima razlicitih koordinata za x i y nizove
	long long a = numOfDist(x);
	long long b = numOfDist(y);

	if (N * a + N * b - a * b != M)
	{
		return 0; // los rezultat
	}

	outFile.close();
	solFile.close();
	inFile.close();

	return 1; // dobar rezultat i kraj
}
