#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <cctype>
#include <algorithm>
#include <string_view>
#include <limits>

using namespace std;


bool contieneCaracteresNombreInvalidos(const string& apellido);

int main()
{

    setlocale(LC_ALL, "");
    string apellido{}, seguir;
    float parcial1, parcial2, parcial3, notaFinal;

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


        do{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n\n\tDigite la nota del parcial 1 entre 0 y 5 :\n";
            cout << "\t", cin >> parcial1;
            if(parcial1 < 0 || parcial1 > 5){
                cout << "\n\n\tError: Nota: " << parcial1 << " no esta en el rango de 0 - 5";
            }else  if(cin.fail()){
                cout << "\n\n\tError: Digite solo numeros!";
                cin.clear();
                cin.ignore();
                Sleep(1000);
                system("cls");
            }else {
                continue;
            }
            cout << "\n\n\tDigite la nota del parcial 2 entre 0 y 5 :\n", cin >> parcial2;
            if(parcial2 < 0 || parcial2 > 5){
                cout << "\n\n\tError: Nota: " << parcial2 << " no esta en el rango de 0 - 5";
            }else if(cin.fail()){
                cout << "\n\n\tError: Digite solo numeros!";
                cin.clear();
                cin.ignore();
                Sleep(1000);
                system("cls");
                continue;
            }else {
                continue;
            }

            cout << "\n\n\tDigite la nota del parcial 2 entre 0 y 5 :\n", cin >> parcial3;
            if(parcial3 < 0 || parcial3 > 5){
                cout << "\n\n\tError: Nota: " << parcial3 << " no esta en el rango de 0 - 5";
            }else  if(cin.fail()){
                cout << "\n\n\tError: Digite solo numeros!";
                cin.clear();
                cin.ignore();
                Sleep(1000);
                system("cls");
            }else {
                continue;
            }

            if(cin.fail()){
                cout << "\n\n\tError: Digite solo numeros!";
                cin.clear();
                cin.ignore();
                Sleep(1000);
                system("cls");
            }else {
                break;
            }
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
