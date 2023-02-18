#include <iostream>

using namespace std;

int calcularX(int x)
{
    int resultado = x * x - 3 * x + 5;
    return resultado;
}

int main()
{
    int x;
    cout << "Informe o valor de x:\n> ";
    cin >> x;
    cout << "O valor de x é: " << calcularX(x) << endl;

    return 0;
}