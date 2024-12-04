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

         do {
         cout << "\n\n\tDigite temperatura en grados Celsius, que no sea menor a -273 grados:\n\n\t";
         cin >> TempC;

         if(TempC < -273) {
            system("cls");
            cout << "\n\n\tError: debes digitar el dato correcto, no menor a -273 grados!\n\n\t";
            Sleep(1500);
            system("cls");
         }
    }while(TempC < -273);

    // Calculos.

    //Calculo de Celsius a grados Fahrenheit
    TempF = 9/5 * TempC + 32;
    //Calculo de Celsius a grados Kelvin
    TempK = TempC + 273;
    //Calculo de Celsius a grados Rankime
    TempR = TempF + 460;

    /* ---- Imprimir datos y resultados ---- */
    cout << "\n\t Imprimir datos y resultados \n";
    cout << "\t-----------------------------------------------\n";
    cout << endl;
    cout << "\n\tGrados Celsius digitado: \t" << TempC << endl << endl;
    cout << "\n\tResultado de grados Farenheit: \t" << TempF << endl << endl;
    cout << "\n\tResultado de grados Kelvin: \t" << TempK << endl << endl;
    cout << "\n\tResultado de grados Rankime: \t" << TempR << endl << endl;







     cout << "\n\tDesea realizar otra operacion S/ N? ";
     cin >> seguir;
     while (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n")
     {
      cout << "\n\tError: Digite S o N: "; cin >>  seguir;
     }

    }while(seguir == "S" || seguir == "s");



}
