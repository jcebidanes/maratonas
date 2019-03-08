#include <iostream>
#include <algorithm> 
#include <vector> 
using namespace std;

// https://neps.academy/problem/249

vector<int> s;

class compare { 
    public:
        compare(int m_) : m(m_) {};
        bool operator()(const int x,const int y) { 
            if(x%m == y%m){
                return x > y;
            }
            
            return  x%m > y%m; 
        }
    private:
      int m;
};


void le_entradas(int n, int m){
    s.resize(n);
    for(int i=0 ;  i < n; i++){
        cin >> s[i];
    }
}

void imprime_s(int n){	
    for(int i=0 ;  i < n; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    le_entradas(n,m);
    
    sort(s.begin(), s.end(), compare(m));

    imprime_s(n);
}
