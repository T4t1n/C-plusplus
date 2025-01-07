#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <limits>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("color 70");
    system("title, Project 8");
    string seguir, nombrePaciente;
    bool KcalPaciente, Carbohidratos;
    bool continuar = false;

    do {

        cout << "\n\n\tPrograma que calcula los gramos de nutrientes para una dieta cal�rica!";
        cout << "\n\t--------------------------------------------------------------------------";
        // refernce: https://stackoverflow.com/questions/64310193/how-do-you-use-cin-fail-to-validate-a-string-in-c
        for (;;)
        {


            cout << "\n\n\tDigite el nombre del paciente:\t";
            cin >> nombrePaciente;
            if ( !cin.fail())
            {
                for (char &c : nombrePaciente )
                {
                    if (!isalpha(c))
                    {
                        goto input_invalid;
                    }
                }
                break;
            }
            input_invalid:
            cout << "\n\n\tError! Digite un nombre." << endl;
            cin.clear();
            cin.ignore(256, '\n');
        }


//        do {
//            cout << "\n\n\tDigite la dieta cal�rica en Kcal del paciente:\t";
//            cin >> KcalPaciente;
//
//            if(KcalPaciente < 0) {
//                cin.clear();
//                cin.ignore();
//                cout << "\n\n\tError: El dato ingresado es incorrecto, debe ser un valor positivo";
//                Sleep(1500);
//                system("cls");
//                cout << "\n\n\tIntente de nuevo!";
//                Sleep(700);
//                system("cls");
//                continuar = true;
//
//            } else if(cin.fail()){
//                cin.clear();
//                cin.ignore();
//                cout << "\n\n\tError: El dato ingresado es incorrecto debe ser valor numerico!";
//                Sleep(1500);
//                system("cls");
//                cout << "\n\n\tIntente de nuevo!";
//                Sleep(700);
//                system("cls");
//                continuar = true;
//
//            }
//
//
//
//        }while(continuar == true);






do {
        continuar = false; // Reinicia el estado en cada iteraci�n
        cout << "\n\n\tDigite la dieta cal�rica en Kcal del paciente:\t";
        cin >> KcalPaciente;

        if (cin.fail()) { // Verifica si hubo error al leer
            cin.clear(); // Limpia el estado de error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta caracteres en el b�fer
            cout << "\n\n\tError: El dato ingresado es incorrecto, debe ser un valor num�rico!";
            Sleep(1500);
            system("cls");
            cout << "\n\n\tIntente de nuevo!";
            Sleep(700);
            system("cls");
            continuar = true;
        } else if (KcalPaciente < 0) { // Verifica si es negativo
            cout << "\n\n\tError: El dato ingresado es incorrecto, debe ser un valor positivo!";
            Sleep(1500);
            system("cls");
            cout << "\n\n\tIntente de nuevo!";
            Sleep(700);
            system("cls");
            continuar = true;        }
   } while (continuar);





        Carbohidratos = KcalPaciente * 0.55;

        // IMPRIMIR DATOS Y RESULTADOS
        cout << "\n\n\t\tImprimir datos y resultados";
        cout << "\n\t------------------------------------------------------";
        cout << "\n\n\tEl nombre del paciente es:\t\t\t" << nombrePaciente;
        cout << "\n\n\tLa dieta cal�rica del paciente es:\t\t" << KcalPaciente;
        cout << "\n\n\tEl aporte cal�rico de los carbohidratos es: " << Carbohidratos;






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
