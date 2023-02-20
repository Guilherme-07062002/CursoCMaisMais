#include <iostream>

using namespace std;

void converterPonteiro(int *pont1, int *pont2)
{
    int auxiliar;
    auxiliar = *pont1;
    
    *pont1 = *pont2;
    *pont2 = auxiliar;
    
    cout << "\nValor ponteiro 1:" << *pont1 << endl;
    cout << "Valor ponteiro 2:" << *pont2 << endl;
    
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    int *pont1 = &num1;
    int *pont2 = &num2;
    
    cout << "Valor ponteiro 1:" << *pont1 << endl;
    cout << "Valor ponteiro 2:" << *pont2 << endl;

    converterPonteiro(pont1, pont2);
    
    return 0;
}