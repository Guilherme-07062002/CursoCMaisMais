#include <iostream>

using namespace std;

int main()
{
    // Alocação estática
    int vet[4];
    vet[0] = 5;
    vet[1] = 10;

    // cout << vet[0] << endl;

    int vet2[4] = {5, 10};

    for (int i = 0; i < 4; i++)
    {
        cout << vet2[i] << endl;
    }

    // Alocação dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int *vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Qual o valor do " << (i + 1) << "° elemento?" << endl
             << "> ";
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete [] vetor;

    return 0;
}