/*
    Escriba, compile y ejecute un programa en C++ que
    dado un n�mero ingresado por el teclado retornmo su ra�z
    cuadrada y el cuadrado.
*/
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int num;
    cout << "\n\tIngrese numero:\t";
    cin >> num;

    int raizCuadrada = sqrt(num);
    int cuadrado = pow(num, 2);

    system("cls");

    cout << "\n\tHaciendo los calculos..." << endl;
    Sleep(2000);
    system("cls");

    cout << "\n\tYa casi todo listo..." << endl;

    Sleep(2000);
    system("cls");


    cout << "\n\tN�mero ingresado: " << num << endl;
    cout << "\tRa�z cuadrada del n�mero ingresado: " << raizCuadrada << endl;
    cout << "\tCuadrado del n�mero ingresado: " << cuadrado << endl;

}
