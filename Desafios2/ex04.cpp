#include <iostream>

using namespace std;

int main()
{
    int *idade1 = new int;
    int *idade2 = new int;

    cout << "Informe a idade da 1° pessoa: ";
    cin >> *idade1;

    cout << "Informe a idade da 2° pessoa: ";
    cin >> *idade2;

    int *somatorio = new int;
    *somatorio = *idade1 + *idade2;

    int *media = new int;
    *media = *somatorio / 2;
    cout << "O valor da média entre as duas idades é: " << *media << endl;

    delete idade1, idade2, somatorio, media;

    return 0;
}