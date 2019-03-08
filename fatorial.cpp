#include <iostream>
using namespace std;

int fatorial(int n){
    if (n > 0 ) return n*fatorial(n-1);
    
    return 1;
}


int main()
{
    int n;
    cin >> n;

    // Answer structured
    // int fatorial = 1;
    // for(int i=n; i>= 1; i--){
    //     fatorial *= i;
    // }

    cout << fatorial(n) << endl;

}
