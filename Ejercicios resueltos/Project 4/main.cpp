#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <limits>

using namespace std;

int main()
{
    float Concentracion,  volumen, concenAcido;
    string seguir = "S";
    do
    {
        system("cls");
        system("color 75");
        setlocale(LC_ALL, "");
        cout << endl;
        cout << "\n\n\tPrograma que calcula el volumen  de titulación de una base!\n";
        cout << "\n\n\t-----------------------------------------------------------\n";
        do {
        cout << "\n\tDigite la concentración en eq-g/L y volumen de la base en L:\t";
        cin >> Concentracion; cout << "\t"; cin >> volumen;
        if(cin.fail()) {
            system("cls");
            cout << "\a";
            cout << "\n\tError: En ambos datos deben ser numeros!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            Sleep(1500);
            system("cls");

        }else {
                break;
            }

        }while (true);

        do {


        }while (true);




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
