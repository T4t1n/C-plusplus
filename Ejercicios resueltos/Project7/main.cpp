#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <windows.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 7");
    string seguir = "S";
    int angulo, velocidad;
    do {
        cout << "\n\n\tPrograma que calcula el alcance y altura máxima de un proyectil!";
        cout << "\n\t------------------------------------------------------------------";
        do{
            cout << "\n\n\tDigigte el ángulo > 0 y < 90 y velocidad inicial del proyectil en m/s";
            cin >> angulo >> velocidad;

        }while(angulo > 0 || angulo < 90 && velocidad > 0 || velocidad < 90);



        cout << "\n\n\tDesea procesar otro proyectil S o N?\t";
        cin >> seguir;
        while(seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
            cout << "\n\n\tError: Debes digitar S o N! Vuelve a intentarlo";
            Sleep(1200);
            system("cls");
            cout << "\n\n\tDesea procesar otro proyectil S o N?\t";
            cin >> seguir;
        }
    }while(seguir != "N" && seguir !="n");
}
