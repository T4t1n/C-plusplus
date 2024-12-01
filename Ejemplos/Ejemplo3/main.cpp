#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int edad;
    cout << "\n\tDigite la edad del usuario:\t";
    cin >> edad;
    cout << "\t" << &edad;
}
