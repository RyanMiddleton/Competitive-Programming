#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a;
  int b;
  cin >> a >> b;
  while (b > 0) {
      if ((a % 10) != 0)
      {
        a -= 1;
        b--;
      }
      else
      {
        a /= 10;
        b--;
      }
    }
  cout << a;
  return 0;
}
