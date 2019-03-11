#include <iostream>
using namespace std;

// https://br.spoj.com/problems/OBIHANOI/
 int counter = 0;
 int test = 1;

void towers(int, char, char, char);
 
int main()
{
    int num;
    cin>>num;
    while (num != 0){
        //cout<<"Enter the number of disks : ";
        //cout<<"The sequence of moves involved in the Tower of Hanoi are :n" << endl;
        towers(num, 'A', 'C', 'B');
        cout << endl << "Teste " << test << endl << counter;
        cin >> num;
        test++;
        counter = 0;
    }
    
}

void towers(int num, char frompeg, char topeg, char auxpeg)
{
    counter++;
    if (num == 1)
    {
        //cout<<"n Move disk 1 from peg "<<frompeg<<" to peg "<<topeg << endl;
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    //cout<<"n Move disk "<<num<<" from peg "<<frompeg<<" to peg "<<topeg << endl;
    towers(num - 1, auxpeg, topeg, frompeg);

}
 
