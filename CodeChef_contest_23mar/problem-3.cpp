//Group Assignment
/*
Sample Input
3
2 2
3 1
3 4
Sample Output
3
6
3
*/

#include <cstdlib>
#include <iostream>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  cout << (2 * n) - (x - 1) << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}
