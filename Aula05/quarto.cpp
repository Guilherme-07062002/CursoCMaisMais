#include <iostream>

using namespace std;

// Definindo uma constante
#define pi 3.14;

#define curtir cout << "Frase aleatoria\n";

void imprimir(){
    cout << "Olá" << endl;
}

int somar(int x, int y){
    int soma = x + y;
    return soma;
}

int main(){
    imprimir();
    int resultado = somar(5, 5);
    cout << "Soma: "<< resultado << endl;
    
    curtir;
    return 0;
}