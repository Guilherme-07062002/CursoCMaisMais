#include <iostream>

using namespace std;

class Carro
{
private:
    int ano;
    float valor, quilometragem;

public:
    Carro(int ano, float valor, float quilometragem)
    {
        this->ano = ano;
        this->valor = valor;
        this->quilometragem = quilometragem;
    }
    void setAno(int ano)
    {
        this->ano = ano;
    }
    int getAno()
    {
        return this->ano;
    }
};

int main()
{
    Carro palio(1995, 1000, 1500);
    // palio.setAno(2012);
    cout << palio.getAno() << endl;

    return 0;
}