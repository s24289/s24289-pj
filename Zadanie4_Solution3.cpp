// Zadanie4_Solution3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int a, b, c;


int main()
{

	int a, b, c, max;
	//wczytywanie liczb a, b i c

	cin >> a >> b >> c;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout << "Największa liczba to: " << max;
	return 0;

}


