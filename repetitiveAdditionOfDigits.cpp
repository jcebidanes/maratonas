#include <iostream>
#include <vector>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> digits;

int reduce(int n)
{
    digits.clear();
    while (n)
    {
        digits.push_back(n % 10);
        n /= 10;
    }

    int sum = std::accumulate(digits.begin(), digits.end(), 0);
    if (sum > 9)
    {
        reduce(sum);
    }
    else
    {
        return sum;
    }
}

int main()
{
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << reduce(n) << endl;
    }
}
