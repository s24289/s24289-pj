// zadanie2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>



int main()
{
   std::cout << "Prosze podac liczbe. Sprawdze czy ta podana liczba jest ujemna czy dodatnia.\n";
   std::cout << "Podaj liczbe : ";

   double liczba;
  std:: cin >> liczba;
   if (liczba > 0)
	   std::cout << "liczba jest dodatnia";
   else if (liczba < 0)
	   std::cout << "liczba jest ujemnna";
   


}

