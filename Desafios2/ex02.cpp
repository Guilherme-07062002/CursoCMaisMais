#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Informe o tamanho do eixo x: ";
    cin >> x;

    cout << "Informe o tamanho do eixo y: ";
    cin >> y;

    cout << "Preenchendo matriz 1...\n";

    int matriz[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Informe o valor que está na linha " << (i + 1) << " coluna " << (j + 1) << endl
                 << "> ";
            cin >> matriz[i][j];
        }
    }

    cout << "Preenchendo matriz 2...\n";
    int matriz2[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Informe o valor que está na linha " << (i + 1) << " coluna " << (j + 1) << endl
                 << "> ";
            cin >> matriz2[i][j];
        }
    }
    cout << "\nExibindo as duas matrizes...\n"
         << endl;

    for (int c = 0; c < x; c++)
    {
        for (int h = 0; h < y; h++)
        {
            cout << matriz[c][h] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int c = 0; c < x; c++)
    {
        for (int h = 0; h < y; h++)
        {
            cout << matriz2[c][h] << " ";
        }
        cout << endl;
    }

    cout << "\nSomando as duas matrizes..." << endl;
    int somatorio = 0;

    for (int c = 0; c < x; c++)
    {
        for (int h = 0; h < y; h++)
        {
            somatorio += matriz[c][h] + matriz2[c][h];
        }
    }
    cout << "Resultado da soma: " << somatorio << endl;

    return 0;
}