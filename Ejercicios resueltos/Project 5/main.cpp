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
    int coefa, coefb, coefc, raiz1, raiz2;
    string seguir = "S";
    do
    {

        cout << "\n\tPrograma que calcula las raíces de una ecuación cuadrática!";
        cout << "\n\t-----------------------------------------------------------";
        do{
            cout << "\n\n\tDigite los coeficientes a, b y c de la ecuación cuadrática:\n";
            cout << "\t", cin >> coefa, cout << "\t", cin >> coefb, cout << "\t", cin >> coefc;
            if(cin.fail()){
                cout << "\n\tError: Los datos debes ser numericos!\n";
                cin.clear();
                cin.ignore();
            }else {
                break;
            }
        }while(true);

        //Calculos
        raiz1 = (-coefb + sqrt(pow(coefb, 2) -4 * coefa * coefc)) / (2 * coefa);
        raiz2 = (-coefb - sqrt(pow(coefb, 2) -4 * coefa * coefc)) / (2 * coefa);

        //Imprimir
        cout << "\n\t\tImprimir datos y resultados";
        cout << "\n\t-----------------------------------------------";
        cout << "\n\tEcuación cuadrática general a X ^ 2 + b X + c";
        cout << "\n\tEcuación cuadrática particular " << coefa << " X ^ 2 + " << coefb;




        do {
            cout << "\n\t¿Desea realizar otro proceso? S / N\t";
            cin >> seguir;
            if (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
                cout << "\n\tError: Digite S o N!\n";
            }else {
                break;
            }
        }while(true);
    }while(seguir == "S" || seguir == "s");
}
