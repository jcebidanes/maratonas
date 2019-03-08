#include <iostream>
using namespace std;


int fibonacci(int n){
    if( n > 1){
        return fibonacci(n-1) + fibonacci(n-2);
    } else {
        return 1;
    }
}


int main()
{
    int n;
    cin >> n;
    
    cout << fibonacci(n) << endl;
}
