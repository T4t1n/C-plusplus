#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float ra;
    cout << "\n\tDígite el radio del círculo: ";
    cin >> ra;
    cout << "\t" << &ra;
}
