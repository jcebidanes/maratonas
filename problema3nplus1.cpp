#include <iostream>
using namespace std;

// https://neps.academy/problem/259

int main()
{
    int n;
    int loop = 0;
    cin >> n;

    while( n != 1){
        loop++;
        
        if((n%2) == 0){
            n = n/2;
        }else {
            n = (3 * n) + 1;
        }
    }

    cout << loop << endl;
}
