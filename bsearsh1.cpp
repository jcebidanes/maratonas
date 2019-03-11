#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// https://www.spoj.com/problems/BSEARCH1/

int n, q;
int s[100009];


void le_entrada(){
    scanf("%d %d", &n, &q);
    for(int i=0; i<n; i++ ){
        cin >> s[i];
    }
}

int busca_binaria(int de, int ate, int valor){
    if(de > ate){
        return -1;
    }

    int meio = (de + ate)/2;
    if(de == ate){
        if(s[de] == valor){
            return de;
        }else{
            return -1;
        }
    }

    if(s[meio] < valor){
        return busca_binaria(meio+1, ate, valor);
    } else if(valor == s[meio]){
        return busca_binaria(de, meio, valor);
    } else {
        return busca_binaria(de, meio-1, valor);
    }

}


int main()
{
    le_entrada();

    for(int i=0; i<q; i++){
        int valor;
        scanf("%d", &valor);
        printf("%d\n", busca_binaria(0, n-1, valor));
    }
    
}
