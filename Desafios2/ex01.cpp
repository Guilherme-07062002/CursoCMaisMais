#include <iostream>

using namespace std;

int main()
{
    int gastos[5];
    int somatorio = 0;
    int media;

    for (int i = 0; i < 5; i++)
    {
        cout << "Informe os gastos com a " << (i + 1) << "° familia: ";
        cin >> gastos[i];
        somatorio += gastos[i];
    }

    media = somatorio / 5;
    cout << "A média dos gastos entre as 5 familias é de : " << media << endl;
    
    for (int i = 0; i < 5; i++)
    {
        if (gastos[i] > media)
        {
            cout << "O gasto da familia " << (i + 1) << " foi acima da média.\n";
        }
        else if (gastos[i] < media)
        {
            cout << "O gasto da familia " << (i + 1) << " foi abaixo da média.\n";
        }
        else
        {
            cout << "O gasto da familia " << (i + 1) << " está na média.\n";
        }
    }

    return 0;
}