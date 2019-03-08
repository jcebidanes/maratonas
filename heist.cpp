#include <iostream>
#include <algorithm> 
using namespace std;

// http://codeforces.com/problemset/problem/1041/A

int s[100009];
int stolen = 0;

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

int count(int n){
    int total =0;
    int atual = s[1];
    for(int i=1 ;  i <= n; i++){
        
        while (atual+1 < s[i+1]) {
            total++;
            atual++;
        }
        atual = s[i+1];
    }
    return total;
}

int main()
{   
    int n;
    cin >> n;
    le_entrada(n);

    sort(s, s+(n+1));

    // imprime_s(n);

    cout << count(n) << endl;
    
}
