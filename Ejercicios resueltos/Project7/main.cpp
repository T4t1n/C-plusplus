#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <windows.h>
#include <locale.h>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("color 60");
    system("title, Project 7");
    string seguir = "S";
    double angulo, velocidad, anguloradial;
    double seno, resultadoAlcance, pi=M_PI, resultadoAltura, seno2, alturaRedondeada, factor;
    do {
        cout << "\n\n\tPrograma que calcula el alcance y altura máxima de un proyectil!";
        cout << "\n\t------------------------------------------------------------------";


            cout << "\n\n\tDigite el ángulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\n";
            cout << "\t", cin >> angulo,cout << "\t", cin >> velocidad;

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

        // ---------------- Calculo ´para el alcance máximo ----------------

        anguloradial = angulo * pi / 180;
        seno = sin(2*anguloradial);

        resultadoAlcance = (pow(velocidad, 2) * 1) / 9.8;

        // ---------------- Calculo ´para la altura maxima del proyectil ----------------

        seno2 = sin(anguloradial);
        resultadoAltura =  pow((velocidad * seno2), 2);
        resultadoAltura = resultadoAltura / (2 * 9.8);


        // --------------- Imprimir datos y resultados -----------;

        cout << "\n\n\t\tImprimir datos y resultados";
        cout << "\n\t---------------------------------------------------";
        cout << "\n\n\tEl ángulo de disparo del proyectil es:\t" << angulo << " grados";
        cout << "\n\n\tLa velocidad inicial del proyectil es:\t" << velocidad << " m/s";
        cout << "\n\n\tEl alcance máximo del proyectil es:\t" << resultadoAlcance << " m";
        cout << "\n\n\tLa altura máxima del proyectil es:\t" << resultadoAltura << " m";
        cout << "\n\n\t---------------------------------------------------";


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
