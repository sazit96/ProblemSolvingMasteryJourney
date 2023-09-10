#include <iostream>
using namespace std;
int main() 
{
  int T, n, a[10005];
  cin >> T;
  while (T--) 
  {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n % 2 == 1) 
    {
      cout << "4 " << 1 << " " << n - 1 << endl;
      cout << 1 << " " << n - 1 << endl;
      cout << n - 1 << " " << n << endl;
      cout << n - 1 << " " << n << endl;
    } 
    else 
    {
      cout << "2 " << 1 << " " << n << endl;
      cout << 1 << " " << n << endl;
    }
  }
  return 0;
}
