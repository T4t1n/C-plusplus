#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <cctype>
#include <algorithm>
#include <string_view>
#include <limits>
#include <iomanip>

using namespace std;


bool contieneCaracteresNombreInvalidos(const string& apellido);

int main()
{
    cout << fixed << setprecision(2);

    setlocale(LC_ALL, "");
    string apellido{}, seguir;
    float parcial1, parcial2, parcial3, notaFinal;
    double porcentaje2{0.30};

    do
    {

        system("title, Project 6");
        system("color 70");
        system("cls");
        cout << "\n\n\tPrograma que calcula la nota final del estudiante!";
        cout << "\n\t--------------------------------------------------\n";
        do{
            cout << "\n\n\tDigite el apellido del estudiante:\t";
            cin >> apellido;
            if(contieneCaracteresNombreInvalidos(apellido)){
                system("cls");
                cout << "\n\n\tError: Digite solo letras!";
                Sleep(1000);
                system("cls");
            }
        }while(contieneCaracteresNombreInvalidos(apellido));

        bool continuar1;
        bool continuar2;
        bool continuar3;
        do{
            do{

                    cout << "\n\n\tDigite la nota del parcial 1 entre 0 y 5 :\n";
                    cout << "\t", cin >> parcial1;
                    if(parcial1 < 0 || parcial1 > 5){
                        cout << "\n\n\tError: Rango de 0 a 5!";
                        continuar1 = false;
                    }else if(cin.fail()){
                        cout << "\n\n\tError: Digite solo numeros!";
                        cin.clear();
                        cin.ignore();
                        Sleep(1000);
                        system("cls");
                        continuar1 = false;

                    }else {
                    break;}


            }while(continuar1 == false);

            do{
                    cout << "\n\n\tDigite la nota del parcial 2 entre 0 y 5 :\n";
                    cout << "\t", cin >> parcial2;
                    if(parcial2 < 0 || parcial2 > 5){
                        cout << "\n\n\tError: Rango de 0 a 5!";
                        continuar2 = false;
                    }else if(cin.fail()){
                        cout << "\n\n\tError: Digite solo numeros!";
                        cin.clear();
                        cin.ignore();
                        Sleep(1000);
                        system("cls");
                        continuar2 = false;

                    }else{break;}

            }while(continuar2 == false);

            do{
                 cout << "\n\n\tDigite la nota del parcial 3 entre 0 y 5 :\n";
                    cout << "\t", cin >> parcial3;
                    if(parcial3 < 0 || parcial3 > 5){
                        cout << "\n\n\tError: Rango de 0 a 5!";
                        continuar2 = false;
                    }else if(cin.fail()){
                        cout << "\n\n\tError: Digite solo numeros!";
                        cin.clear();
                        cin.ignore();
                        Sleep(1000);
                        system("cls");
                        continuar3 = false;

                    }else {
                    break;}


            }while(continuar3 == false);

            break;

        }while(true);


        /*
            ++++++++++  +++++++++ ++++         ++++++++++ +++     +++ ++++         +++++++++++
            ++++++++++  +++++++++ ++++         ++++++++++ +++     +++ ++++         +++++++++++
            +++         ++     ++ ++++         +++        +++     +++ ++++         +++     +++
            +++         +++++++++ ++++         +++        +++     +++ ++++         +++     +++
            +++         ++     ++ ++++         +++        +++     +++ ++++         +++     +++
            ++++++++++  ++     ++ ++++++++++++ ++++++++++ +++++++++++ ++++++++++++ +++++++++++
            ++++++++++  ++     ++ ++++++++++++ ++++++++++ +++++++++++ ++++++++++++ +++++++++++
        */

        notaFinal = (parcial1 * 0.25) + (parcial2 * 0.30) + (parcial3 * 0.45);


        cout << "\n\n\t\tImprimir datos y resultados";
        cout << "\n\t---------------------------------------------------------------------\n";
        cout << "\n\n\tReporte de calificaciones del estudiante:\t" << apellido;
        cout << "\n\tLa primera nota parcial y su porcentaje son:\t" << parcial1 << "\t" << 0.25;
        cout << "\n\tLa segunda nota parcial y su porcentaje son:\t" << parcial2 << "\t" << porcentaje2;
        cout << "\n\tLa tercera nota parcial y su porcentaje son:\t" << parcial3 << "\t" << 0.45;
        cout << "\n\tLa nota final del estudiante es:\t\t" << notaFinal;
        cout << "\n\n\n\t---------------------------------------------------------------------\n";

        cout << "\n\n\t¿Desea procesar otro estudiante? S o N\t";
        cin >> seguir;
        while(seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n")
        {
            system("cls");
            cout << "\n\n\tError: Debe digirar s o n!";
            Sleep(700);
            system("cls");
            cout << "\n\n\t¿Desea procesar otro estudiante?\t";
            cin >> seguir;
        }

    }while(seguir == "S" || seguir == "s");
}




bool contieneCaracteresNombreInvalidos(const std::string& apellido) {
    // Usar std::all_of para comprobar si todos los caracteres son válidos
    return !std::all_of(apellido.begin(), apellido.end(), [](char x) {
        return std::isalpha(x) || std::isspace(x); // Verificar si es letra o espacio
    });
}
