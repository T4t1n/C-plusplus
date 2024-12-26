#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 8");
    string seguir, nombrePaciente;
    int KcalPaciente;

    do {

        cout << "\n\n\tPrograma que calcula los gramos de nutrientes para una dieta calórica!";
        cout << "\n\t--------------------------------------------------------------------------";

        cout << "\n\n\tDigite el nombre del paciente:\t";
        cin >> nombrePaciente;
        cout << "\n\n\tDigite la dieta calórica en Kcal del paciente:\t";
        cin >> KcalPaciente,





        // IMPRIMIR DATOS Y RESULTADOS
        cout << "\n\n\t\tImprimir datos y resultados";
        cout << "\n\t------------------------------------------------------";
        cout << "\n\n\tEl nombre del paciente es:\t\t\t" << nombrePaciente;
        cout << "\n\n\tLa dieta calórica del paciente es:\t\t" << KcalPaciente;






        cout << "\n\n\tDesea procesar otro paciente S/s o N/n\t";
        cin >> seguir;
        while(seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
            cout << "\n\n\tError! Debes digitar S/s o N/n! Vuelve a intentarlo!";
            Sleep(1000);
            system("cls");
            cout << "\n\n\tDesea procesar otro paciente S/s o N/n\t";
            cin >> seguir;
        }
        }while(seguir != "N" && seguir != "n");
}
