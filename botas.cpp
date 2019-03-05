#include <iostream>
using namespace std;

// https://br.spoj.com/problems/BOTAS/

int cnt[70][2];

void limpa(){
	// Zera o numero de botas encontradas em outros testes do problema
	for(int tam=30;tam<=60;tam++){
		cnt[tam][0] = 0;
		cnt[tam][1] = 0;
	}
}

int tipo(char pe){
	if(pe == 'E')
        // esq
		return 0;
	else 
        // dir
		return 1;
}

int main()
{
    int N;
    
    while (cin >> N) {
        limpa();
        //map<int, int> right;
        //map<int, int> left;

        for (int i = 0; i < N; i++) {
            int size;
            char side;
            cin >> size >> side;
            cnt[size][tipo(side)]++;           
        }

        int total = 0;
        // for (auto it = right.begin(); it != right.end(); ++it) {
        //     total += min(right[it->first], left[it->first]);
        // }
        for(int tam=30;tam<=60;tam++){
			total += min(cnt[tam][0], cnt[tam][1]);
		}
        cout << total << endl;
    }

    return 0;
}
