#include <iostream>
#include <algorithm>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::abs;

// https://practice.geeksforgeeks.org/problems/find-the-closest-number/0#ExpectOP

int main()
{
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin>> n >> k;
        int s[100009];
        int closest = 0;
        for (int j=0; j < n; j++){
            cin >> s[j];
            if(j==0){
                closest = s[j];
            } else if (abs(k-s[j]) <= abs(k-closest) ){
                closest = s[j];
            }
        }
        cout << closest << endl;

    }    
}
