#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
    float Concentracion,  volumen, concenAcido;
    string seguir = "S";
    do
    {
        system("cls");
        system("color 85");
        setlocale(LC_ALL, "");
        cout << endl;
        cout << "\n\n\tPrograma que calcula el volumen  de titulación de una base!\n";
        cout << "\n\n\t-----------------------------------------------------------\n";
        cout << "\n\tDigite la concentración en eq-g/L y volumen de la base en L:";






        do {
            cout << "\n\tDesea hacer otro proceso S o N\t";
            cin >> seguir;
            system("cls");
            if (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n")
            {
                cout << "\n\tError: Digite S o N!\n\n";
                Sleep(1500);
                system("cls");

            }

        }while(seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n");

    }while(seguir == "S" || seguir == "s");

}
