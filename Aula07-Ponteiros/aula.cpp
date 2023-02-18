#include <iostream>

using namespace std;

int main(){
    int var1;
    int* pont1;

    var1 = 5;
    pont1 = &var1; 

    cout << "Valor da variável: " << var1 << endl;

    cout << "Endereço armazenado no ponteiro: " << pont1 << endl;

    cout << "Valor armazenado no endereço do ponteiro: " << *pont1 << endl;

    int var2;
    // var2 = var1;
    var2 = *pont1;

    var1 = 30;
    // *pont1 = 30;
    
    return 0;
}