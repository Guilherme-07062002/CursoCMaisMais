#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1: ";
    cin >> nota1;

    cout << "Informe a nota 2: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;
    cout << "Valor da média: " << media << endl;

    if (media >= 6){
        cout << "Aprovado\n";
    }else if (media < 3){
        cout << "Reprovado\n";
    }
    else if (media < 6){
        cout << "Recuperação\n";
    }

    return 0;
}