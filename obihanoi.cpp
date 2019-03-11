#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::fixed;

// https://br.spoj.com/problems/OBIHANOI/
int test = 1;
 
int main()
{
    int num;
    cin>>num;

    while (num != 0){
        cout.precision(0);
        cout << fixed;
        cout << endl << "Teste " << test << endl << (pow(2, num) -1)  <<  endl;
        cin >> num;
        test++;
    }
    
}
