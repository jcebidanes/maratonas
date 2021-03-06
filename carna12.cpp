#include <iostream>
using namespace std;

// https://br.spoj.com/problems/CARNA12/
double s[10];

void le_entrada(){
    for(int i=0 ;  i < 5; i++){
        cin >> s[i];
    }
}

void selection_sort(){
    for(int i=0; i < 5; i++ ){ 
        int menor = i;
        for(int j=i; j < 5; j++ ){
            if (s[j] < s[menor]){
                menor = j;
            }
        }
        swap(s[menor], s[i]);
    }
}

int main()
{
    le_entrada();
    selection_sort();
    
    double soma = 0.0;
    for(int i = 0; i <5; i++){
        soma += s[i];
    }
    cout.precision(1);
    cout << fixed;
    cout << soma - s[0] - s[4] << endl;
    
    return 0;
}
