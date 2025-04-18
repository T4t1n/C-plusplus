#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    system("title, Project 10");
    system("color 70");


    string seguir = "s";
    int masaGramos = 0;
    double celsiusTI = 0, celsiusTF = 0, Q = 0;
    while (seguir == "S" || seguir == "s") {

            cout << "\n\n\tPrograma que calcula la cantidad de calor!\n";
            cout << "\t------------------------------------------";
            Sleep(700);
            cout << "\n\n\n\tCaptura y validación de datos\n";
            cout << "\t-----------------------------";
            Sleep(700);


            //################## USER INPUT DATA ##################

            // Input masaGramos
            while (true) {

                cout << "\n\n\n\tDigite la masa de agua en gramos:\t";
                if (cin >> masaGramos && masaGramos >= 0) {
                    break;
                } else {
                    cout << "\n\n\tError: La masa debe ser un número mayor o igual a 0.\n";
                    cin.clear();
                    cin.ignore(123,'\n');
                }
            }

            // Input Celsius Initial Temperature

            while (true) {
                cout << "\n\n\tDigite la temperatura inicial en grados celsius:\t";
                if (cin >> celsiusTI) {
                    break;
                } else {
                    cout << "\n\n\tError: Ingrese solo numeros!\n";
                    cin.clear();
                    cin.ignore(123,'\n');
                }
            }

            cin.clear();
            cin.ignore(123, '\n');

            // Input Celsius Final Temperature

            while (true) {
                cout << "\n\n\tDigite la temperatura final en grados celsius:\t";
                if(cin >> celsiusTF) {
                    break;
                } else {
                    cout << "\n\n\tError: Ingrese solo numeros!\n";
                    cin.clear();
                    cin.ignore(123,'\n');
                }
            }


            //################## CALCULATIONS ##################

            cout << "\n\n\tCalculando la cantidad de calor requerido...";
            Sleep(1000);

            Q = masaGramos * 1 * (celsiusTF - (celsiusTI)); // watch out with... for example (50 -(-20))



            //################## PRINT THE DATA ##################
            cout << "\n\n\n\t\t\tImprimir datos y resultado\n";
            cout << "\t----------------------------------------------------------";
            Sleep(700);
            cout << "\n\n\tMasa de agua en gramos:\t\t\t\t" << masaGramos;
            Sleep(700);
            cout << "\n\tTemperatura inicial en grados celsius Ti:\t" << celsiusTI;
            Sleep(700);
            cout << "\n\tTemperatura final en grados celsius Tf:\t\t" << celsiusTF;
            Sleep(700);
            cout << "\n\tCantidad de calor en Calorías Q:\t\t" << Q;
            cout << "\n\t----------------------------------------------------------\n";






            //################## DO NEW PROCESS? YES OR NOT ##################


            do{
                cout << "\n\n\tDesea procesar nuevamente: S/s o N/n\t";
                cin >> seguir;
                if (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
                    cout << "\n\tError: Vuelve a intentarlo!";
                } else {
                    break;
                }
            }while (true);

    }
}
