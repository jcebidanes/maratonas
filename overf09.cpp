#include <iostream>
using namespace std;

// https://br.spoj.com/problems/OVERF09/

int main()
{
    int maiorNumero, num1, num2;
    char operador;
    
    cin >> maiorNumero;
    cin >> num1 >> operador >> num2;

    switch(operador)
    {
        case '+':
            cout << ((num1+num2) > maiorNumero ? "OVERFLOW" : "OK") << endl;
            break;

        case '*':
             cout << ((num1*num2) > maiorNumero ? "OVERFLOW" : "OK") << endl;
            break;
    }
}
