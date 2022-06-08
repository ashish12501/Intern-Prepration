#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, res = 1;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int k = i;
    cout << "1 ";
    for (int i = 0; i < (k - 1); i++)
    {
      res = res * ((k - 1) - i);
      res = res / (i + 1);
      cout << res <<" ";
    }
    cout << endl;
  }
}