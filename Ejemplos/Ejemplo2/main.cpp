#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string nom;
    cout << "\n\tDigite el nombre del usuario:\t";
    cin >> nom;
    cout << "\t" << &nom;
}
