#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <limits>
#include <cmath>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 5");
    system("color 70");
    int coefa, coefb, coefc, raiz1, raiz2;
    string seguir = "S";
    do
    {
        system("cls");

        cout << "\n\tPrograma que calcula las raíces de una ecuación cuadrática!";
        cout << "\n\t-----------------------------------------------------------";
        do{

            cout << "\n\n\tDigite los coeficientes a, b y c de la ecuación cuadrática:\n";
            cout << "\t", cin >> coefa, cout << "\t", cin >> coefb, cout << "\t", cin >> coefc;
            if(cin.fail()){
                system("cls");
                cout << "\n\n\tError: Los datos debes ser numericos!\n";
                cin.clear();
                cin.ignore();
                Sleep(1000);
                system("cls");
            }else {
                break;
            }
        }while(true);

        //Calculos
        raiz1 = (-coefb + sqrt(pow(coefb, 2) -4 * coefa * coefc)) / (2 * coefa);
        raiz2 = (-coefb - sqrt(pow(coefb, 2) -4 * coefa * coefc)) / (2 * coefa);

        //Imprimir
        cout << "\n\t\tImprimir datos y resultados";
        cout << "\n\t-----------------------------------------------------------";
        cout << "\n\n\tEcuación cuadrática general aX^2 + bX + c";
        cout << "\n\n\tEcuación cuadrática particular " << coefa << "X^2 + " << coefb << "X" << " + " << coefc;
        cout << "\n\n\n\tEl coeficiente cuadrático es:\t\t\t" << coefa;
        cout << "\n\n\tEl coeficiente lineal es:\t\t\t" << coefb;
        cout << "\n\n\tEl coeficiente termino independiente es:\t" << coefc;
        cout << "\n\n\tLa primera raíz de la ecuación cuadrática es:\t" << raiz1;
        cout << "\n\n\tLa segunda raíz de la ecuación cuadrática es:\t" << raiz2;
        cout << "\n\n\t-----------------------------------------------------------";



        do {
            cout << "\n\n\t¿Desea realizar otro proceso? S / N\t";
            cin >> seguir;
            if (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
                cout << "\n\tError: Digite S o N!\n";
            }else {
                break;
            }
        }while(true);
    }while(seguir == "S" || seguir == "s");
}
