#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <limits>

using namespace std;

int main()
{
    float Concentracion,  volumen, concenAcido, volumenR;
    string seguir = "S";
    do
    {
        system("cls");
        system("color 75");
        setlocale(LC_ALL, "");
        system("title, Project 4");
        cout << endl;
        cout << "\n\n\tPrograma que calcula el volumen  de titulaci�n de una base!\n";
        cout << "\n\n\t-----------------------------------------------------------\n";
        //Solicitud de datos
        do {
            cout << "\n\tDigite la concentraci�n en eq-g/L y volumen de la base en L:\t";
            cin >> Concentracion; cout << "\t"; cin >> volumen;
            if(cin.fail()) {
                system("cls");
                cout << "\a";
                cout << "\n\tError: En ambos datos deben ingresar numeros!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                Sleep(1500);
                system("cls");

        }else {
                break;
            }

        }while (true);

        do {
           cout << "\n\tDigite la concentraci�n del �cido en eq-g/L:\t";
           cin >> concenAcido;
           if(cin.fail()) {
               system("cls");
               cout << "\a";
               cout << "\n\tError: Debe ingresar numero!\n";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
           }else {
                break;
           }

        }while (true);



        /* -------- Calculos --------*/

        volumenR = (Concentracion * volumen) / concenAcido;

        /* -------- Fin calculos -------*/

        // Imprimir datos
        system("cls");

        cout << "\n\t\tImprimir datos y resultados\n";
        cout << "\n\t-------------------------------------------------------\n";
        Sleep(300);
        cout << "\n\n\tLa concentraci�n de la base en eq-g/L es:\t" << Concentracion;
        Sleep(300);
        cout << "\n\n\tEl volumen de la base en litros es: \t\t" << volumen;
        Sleep(300);
        cout << "\n\n\tLa concentraci�n del �cido en eq-g/L es:\t" << concenAcido;
        Sleep(300);
        cout << "\n\n\tEl volumen requerido del �cido en litros L es:\t" << volumenR;
        cout << "\n\n\n\t-------------------------------------------------------\n";
        cout << endl;

 cout << "\033[1;31mTexto en rojo brillante\033[0m" << endl;


        //Preguntar a usuario si desea hacer otro proceso
        do {
            cout << "\n\t�Desea realizar otro proceso? S/N\t";
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
