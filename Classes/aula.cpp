#include <iostream>

using namespace std;

class propaganda
{
private:
public:
    void escrever()
    {
        cout << "Olá bom dia" << endl;
    }
};

int main()
{
    propaganda canal;
    canal.escrever();

    return 0;
}