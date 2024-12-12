#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <cctype>
#include <algorithm>
#include <string_view>

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
        }while(contieneCaracteresNombreInvalidos(apellido));





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
