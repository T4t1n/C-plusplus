#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 9");

    string seguir = "";
    double masa_Cilindro, radio_Cilindro, longitud_Cilindro;
    const double Densidad_Aluminio = 2.7;
    do {

        cout << "\n\n\tPrograma que calcula la longitud de un cilindro de aluminio!";
        cout << "\n\t------------------------------------------------------------";

        cout << "\n\n\tCaptura y validación de datos";
        cout << "\n\t-----------------------------";
        cout << "\n\n\tDigite la masa del cilindro en gramos:\t";
        cin >> masa_Cilindro;
        cout << "\n\n\tDigite el radio del cilindro en cm:\t";
        cin >> radio_Cilindro;

        cout >> "\n\n\tCalculando longitud del cilindro...";
        longitud_Cilindro = masa_Cilindro / Densidad_Aluminio * M_PI * sqrt(radio_Cilindro);
        Sleep(700);

        cout << "\n\n\t\tImprimir datos y resultadors";
        cout << "\n\n\t-----------------------------";


        cout << "\n\n\tDesea procesar otro cilindro? : S/s o N/n\t";
        cin >> seguir;
        while (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n") {
            cout << "\n\n\tError: Haz digitado un dato no valido!";
            Sleep(700);
            system("cls");
            cout << "\n\n\tDesea procesar otro cilindro? : S/s o N/n\t";
            cin >> seguir;
        }
    } while (seguir == "S" || seguir == "s");
}
