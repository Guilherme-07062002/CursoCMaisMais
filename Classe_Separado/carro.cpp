#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro(int ano, float valor, float quilometragem)
{
    this->ano = ano;
    this->valor = valor;
    this->quilometragem = quilometragem;
}
void Carro::setAno(int ano)
{
    this->ano = ano;
}
int Carro::getAno()
{
    return this->ano;
}