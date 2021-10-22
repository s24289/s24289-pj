// Zadanie4_Solution2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int a, b, c;
int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin >> a >> b >> c;

    if ((a >= b) && (a >= c))
        cout << "Najwieksza liczba : " << a;

    else if ((b >= a) && (b >= c))
        cout << "Najwieksza liczba: " << b;

    if ((c >= a) && (c >= b))
        cout << "Najwieksza liczba : " << c;
    return 0;
}
