#include <iostream>

using namespace std;

int calcularFatorial(int valor)
{
    int contador = (valor - 1);
    int fatorial = valor;
    cout << "!" << valor << " = " << valor;
    while (contador > 0)
    {
        cout << " x " << contador;
        fatorial *= contador;
        contador--;
    }
    cout << endl;
    return fatorial;
}

int main()
{
    int valor, resultado;
    cout << "Informe um valor para calcular o fatorial: ";
    cin >> valor;
    int fatorial = calcularFatorial(valor);
    cout << "O fatorial de " << valor << " é: " << fatorial << endl;

    return 0;
}