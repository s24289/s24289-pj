// Zadanie3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int main()
{
    cout << "Wprowadz liczbę. Sprawdze czy podana liczba jest parzysta czy nieparzysta. \n";

    cout << "Wpisz liczbe: ";

    int liczba;
    cin >> liczba;


    if (liczba == 0)
        cout << "Zadna";
    else if (liczba > 0) {
        liczba = liczba % 2;
        if (liczba == 0)
            cout << "Liczba jest parzysta.";
        else
            cout << "Liczba jest nieparzysta.";
    }
    else if (liczba < 0) {
        liczba = liczba % 2;
        if (liczba == 0)
            cout << "Liczba jest parzysta.";
        else
            cout << "Liczba jest nieparzysta.";
    }
    
        
    

    return 0;

}
 
