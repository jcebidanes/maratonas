#include <iostream>
#include <algorithm> 
using namespace std;

// http://codeforces.com/problemset/problem/984/A

int s[1000009];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s, s + n);

  cout << s[(n - 1) / 2];
}