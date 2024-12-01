#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    char sex;
    char* pchar;
    pchar = &sex;
    cout << "\n\tDigite el género del usuario:\t";
    cin >> sex;
    cout << "\n\tContenido " << sex;
    cout << "\n\tMemoria: " << &pchar;
}
