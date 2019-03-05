#include <iostream>
#include <string>
using namespace std;

// https://br.spoj.com/problems/PAR/

int main(){
    int npartidas;
    int maoA, maoB;
    string jogadorA, jogadorB;

    for (int teste=1; ; teste++) {

        cin >> npartidas; 
        if (npartidas == 0) {
            break;
        }

        cin >> jogadorA;
        cin >> jogadorB;

        cout << endl;
        cout << "Teste " << teste << endl;
        for (int i=0; i < npartidas; i++) {
            
            cin >> maoA >> maoB; 
            
            if(((maoA + maoB) % 2) == 0){
                cout << jogadorA << endl;  
            } else {
                cout << jogadorB << endl;  
            }
        }        
    }
}