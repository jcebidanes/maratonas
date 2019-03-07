#include <iostream>
#include <algorithm> 
using namespace std;

// https://neps.academy/problem/176

int s[100009];

void le_entrada(int n){
    for(int i=1 ;  i <= n; i++){
        cin >> s[i];
    }
}

void imprime_s(int n){
    for(int i=1 ;  i <= n; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    le_entrada(n);
    
    sort(&s[1], &s[n+1]);

    imprime_s(n);
}
