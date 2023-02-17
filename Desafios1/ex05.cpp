#include <iostream>

using namespace std;

bool verificarUsuario(int idade, float renda)
{
    bool resultado;
    if (idade > 21)
    {
        if (renda < 1200.0)
        {
            resultado = true;
        }
    }

    return resultado;
}

int main()
{
    int idade;
    float renda;

    cout << "Informe sua idade: ";
    cin >> idade;

    cout << "Informe sua renda: ";
    cin >> renda;

    if (verificarUsuario(idade, renda))
    {
        cout << "Usuário pode participar\n";
    }
    else
    {
        cout << "Usuário NÃO pode participar\n";
    }

    return 0;
}