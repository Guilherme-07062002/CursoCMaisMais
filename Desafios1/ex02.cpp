#include <iostream>

using namespace std;

float calcularMediaAluno(int nota1, int nota2, int nota3)
{
    float media = ((nota1 + nota2 + nota3) / 3);
    return media;
}

void verificarMedia(float media, float mediaTurma)
{
    cout << "O aluno tem média " << media << endl;
    cout << "E a média da turma é " << mediaTurma << " portanto," << endl;
    if (media > mediaTurma)
    {
        cout << "O aluno está acima da média.\n";
    }
    else if (media < mediaTurma)
    {
        cout << "O aluno está abaixo da média.\n";
    }
    else if (media == mediaTurma)
    {
        cout << "O aluno está na média.\n";
    }
}

int main()
{
    int nota1, nota2, nota3;
    float mediaTurma;

    cout << "Informe a 1° nota: ";
    cin >> nota1;
    cout << "Informe a 2° nota: ";
    cin >> nota2;
    cout << "Informe a 3° nota: ";
    cin >> nota3;

    cout << "Informe a média da turma: ";
    cin >> mediaTurma;

    float mediaAluno = calcularMediaAluno(nota1, nota2, nota3);
    verificarMedia(mediaAluno, mediaTurma);

    return 0;
}