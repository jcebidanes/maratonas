#include <iostream>
using namespace std;

// https://br.spoj.com/problems/F91/

int f91(int n){
    if (n > 100) {
        return n-10;
    } else {
        return f91(f91(n+11));
    }
}


int main()
{
    int n;
    cin >> n;
    while(n != 0) {
        cout << "f91("<< n << ") = " << f91(n) << endl;
        cin >> n;
    }
}
