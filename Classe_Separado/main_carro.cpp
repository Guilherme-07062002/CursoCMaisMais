#include <iostream>
#include "carro.h"

using namespace std;

int main(){
    Carro palio(1995, 1000, 1500);
    // palio.setAno(2012);
    cout << palio.getAno() << endl;
    
    //system("pause");
    cin.get();

    return 0;
}