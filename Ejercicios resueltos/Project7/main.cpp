#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <windows.h>
#include <locale.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 7");
    string seguir = "S";
    float angulo, velocidad;
    float seno, resultadoAlcance, pi=M_PI;
    do {
        cout << "\n\n\tPrograma que calcula el alcance y altura máxima de un proyectil!";
        cout << "\n\t------------------------------------------------------------------";


            cout << "\n\n\tDigite el ángulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\t";
            cin >> angulo >> velocidad;

            while(cin.fail()){
                cin.clear();
                cin.ignore();
                cout << "\n\n\tError: Debes digitar valores numericos!";
                Sleep(1000);
                system("cls");
                cout << "\n\n\tDigite el ángulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\t";
                cin >> angulo >> velocidad;

            };

            while(angulo < 0 || angulo > 90 || velocidad < 0 || velocidad > 90){
                cin.clear();
                cin.ignore();
                cout << "\n\n\tError: Debes digitar valores correctos!";
                Sleep(1000);
                system("cls");
                cout << "\n\n\tDigite el ángulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\t";
                cin >> angulo >> velocidad;
            };

            // ---------------- Fórmula ´para el alcance máximo ----------------

            angulo = angulo * pi / 180;
            seno = sin(2*angulo);

            resultadoAlcance = (pow(velocidad, 2) * 1) / 9.8;

            cout << resultadoAlcance;

            cout << "\n\n\t\tImprimir datos y resultado";
            cout << "\n----------------------------------";
            cout << "\n\n\tEl ángulo de disparo del proyectil es: " << angulo;
            cout << "\n\tLa velocidad inicial del proyectil es: " << velocidad;
            cout << "\n\tEl alcance máximo del proyectil es:" << resultadoAlcance;
            cout << "\n\tLa altura máxima del proyectil es: ";
            cout << "\n\n----------------------------------";






        cout << "\n\n\tDesea procesar otro proyectil S o N?\t";
        cin >> seguir;
        while(seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
            cout << "\n\n\tError: Debes digitar S o N! Vuelve a intentarlo";
            Sleep(1200);
            system("cls");
            cout << "\n\n\tDesea procesar otro proyectil S o N?\t";
            cin >> seguir;
        }
    }while(seguir != "N" && seguir !="n");
}
