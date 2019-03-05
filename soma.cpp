#include <iostream>
using namespace std;

// https://br.spoj.com/problems/SOMA/

int main(){
    int n;
    cin >> n;

    int soma = 0;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        soma += x;
    }

    cout << soma << endl;
}
