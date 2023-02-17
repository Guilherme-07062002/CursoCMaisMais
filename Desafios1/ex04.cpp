#include <iostream>
#include <math.h>

using namespace std;

int calcularPotencia(int valor, int potencia)
{
    int resultado = valor;
    
    for(int c = 1; c < potencia; c++){
        resultado *= valor;
    }

    return resultado;
}

int main()
{
    string opcao;
    int resultado, potencia;
    float valor;

    while (true)
    {
        cout << "Informe o valor :";
        cin >> valor;

        cout << "Informe a potência :";
        cin >> potencia;

        resultado = calcularPotencia(valor, potencia);

        cout << valor << "^" << potencia << " = " << resultado << endl;

        cout << "Deseja continuar? (y/n): ";
        cin >> opcao;

        if (opcao == "n" || opcao == "N")
        {
            break;
        }
    }

    return 0;
}