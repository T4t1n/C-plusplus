#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("color 70");
    system("title, Project 8");
    string seguir, nombrePaciente;
    int KcalPaciente;
    bool continuar;

    do {

        cout << "\n\n\tPrograma que calcula los gramos de nutrientes para una dieta calórica!";
        cout << "\n\t--------------------------------------------------------------------------";

        cout << "\n\n\tDigite el nombre del paciente:\t";
        cin >> nombrePaciente;
        do {
            cout << "\n\n\tDigite la dieta calórica en Kcal del paciente:\t";
            cin >> KcalPaciente;

            while(KcalPaciente < 0) {
                cin.clear();
                cin.ignore();
                cout << "\n\n\tError: El dato ingresado es incorrecto, debe ser un valor positivo";
                Sleep(1500);
                system("cls");
                cout << "\n\n\tIntente de nuevo!";
                Sleep(700);
                system("cls");
                continuar =  true;
            }
            while(cin.fail()){
                cin.clear();
                cin.ignore();
                cout << "\n\n\tError: El dato ingresado es incorrecto debe ser valor numerico!";
                Sleep(1500);
                system("cls");
                cout << "\n\n\tIntente de nuevo!";
                continuar = true;

            }

        }while(continuar == true);



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
