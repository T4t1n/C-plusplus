#include <iostream>
#include <cmath>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    float hipotenusa, angulo, resultado;
    float pi = M_PI;
    string seguir = "S";
    setlocale(LC_ALL, "");
    system("color 70");


    do {
        system("cls"); // Comando para limpiar la pantalla
        cout << "\n\tPrograma que calcula el cateto de un triangulo rectangulo: ";
        cout << "\n\t-------------------------------------------------------\n\n";
        cout << "\n\tDigite la hiputenusa:\t";
        cin >> hipotenusa;
        while (hipotenusa < 0) {
            system("cls");
            cout << "\n\tError: la hipotenusa debe ser un valor positivo\n";
            Sleep(2000);
            system("cls");
            cout << "\n\tDigite la hipotenusa:\t";
            cin >> hipotenusa;
        }
        cout << "\n\tDigite el angulo en grados:\t";
        cin >> angulo;
        while (angulo < 0) {
            system("cls");
            cout << "\n\tError: El angulo asegurese de que sea positivo\n";
            Sleep(2000);
            system("cls");
            cout << "\n\tDigite el angulo en grados:\t";
            cin >> angulo;
        }
        float radianes;
        // Calculo de anguo a raianes
        radianes = angulo * pi / 180;

        radianes = sin(radianes);

        float distancia = hipotenusa * radianes;

        system("cls");
        cout << "\n\n\t Imprimir datos y resultados";
        cout << "\n\t------------------------------\n\n";
        cout << "\n\t La hipotenusa digitada es:\t\t\t" << hipotenusa;
        cout << "\n\t El agulo en grados digitado es:\t\t" << angulo;
        cout << "\n\t La distancia o cateto es:\t\t\t" << distancia;
        cout << "\n\n\n\t------------------------------\n\n";




    cout << "\n\tQuieres hacer otro calculo:\t";
    cin >> seguir;
    while (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n")
    {
        cout << "\n\tError: Digite s o n: ";
        cin >> seguir;
    }


    }while(seguir == "S"  or seguir == "s");
}
