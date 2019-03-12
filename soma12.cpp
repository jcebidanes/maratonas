#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// https://br.spoj.com/problems/SOMA12/

int n, k;
int s[100009];
int indexMin = 0, indexMax;

void tunning(bool increaseMin){
    if (increaseMin){
        indexMin++;
    } else {
        indexMax--;
        indexMin = 0;
    }
}

void le_entradas(){
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] < k) {
            indexMax = i;
        }
    }
    
    cin >> k;
}


int main()
{
    le_entradas();
    indexMax = n-1;
    while(s[indexMax]+s[indexMin] != k){

        if(s[indexMax] >= k || s[indexMax]+s[indexMin] > k ){
            tunning(false); // <-- ajusta maior numero e reseta min
        } else {  
            tunning(true); // <-- ajusta o menor numero
        } 
    }

    cout << s[indexMin] << " " << s[indexMax] <<  endl;
}
