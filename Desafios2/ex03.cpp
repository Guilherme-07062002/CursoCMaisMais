#include <iostream>

using namespace std;

void gerarVetor(int tamanho)
{
    int *vetor = new int[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Que valor está na " << (i + 1) << " posição?" << endl
             << "> ";
        cin >> vetor[i];
    }
    cout << "[ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;

    delete[] vetor;
}

int main()
{
    int tamanho;
    char opcao;

    while (true)
    {
        cout << "Informe o tamanho do vetor: " << endl
             << "> ";
        cin >> tamanho;

        gerarVetor(tamanho);

        cout << "Deseja imprimir outro vetor? (y/n):";
        cin >> opcao;

        if (opcao == 'n' || opcao == 'N')
        {
            break;
        }
    }

    return 0;
}