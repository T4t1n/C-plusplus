#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
    float TempC, TempK, TempF, TempR;
    string seguir = "S";
    setlocale(LC_ALL, "");
    do
    {
         system("cls");
         system("color 70");
         cout << "\n\n\n\tPrograma que convierte la temperatura en grados Celsius a grados Fahrenheit, Kelvin y Rankime!\n";
         cout << "\t----------------------------------------------------------------------------------------------------\n";
         cout << "\n\n\tDigite temperatura en grados Celsius";







         cout << "\n\tDesea realizar otra operacion S/ N? ";
         cin >> seguir;
         while (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n")
         {
             cout << "\n\tError: Digite S o N: "; cin >>  seguir;
         }

    }while(seguir == "S" || seguir == "s");



}
