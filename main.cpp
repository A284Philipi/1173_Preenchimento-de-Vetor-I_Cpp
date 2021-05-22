#include <iostream>

using namespace std;

int main()
{
    long long int cont = 0, numero;
    cin >> numero;
    while (cont < 10){
        cout << "N[" << cont << "] = " << numero <<endl;
        numero = numero * 2;
        cont++;
    }
    return 0;
}
