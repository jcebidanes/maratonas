#include <iostream>
#include <cstdlib>
using namespace std;

// https://br.spoj.com/problems/DAMA/

int main()
{
    int x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    while( (x1+x2+y1+y2) != 0){

        int dx = abs(x1-x2);
        int dy = abs(y1-y2);
        
        if(x1 == x2 && y1 == y2){
            cout << 0 << endl;
        }else if (y1 == y2 || x1 == x2 || dx == dy) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }    

        cin >> x1 >> y1 >> x2 >> y2;
    }

}
