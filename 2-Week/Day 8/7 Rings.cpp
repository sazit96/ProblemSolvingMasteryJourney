//https://www.codechef.com/problems/SEVENRINGS?tab=statement
#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	for ( int i=0; i<t; i++ )
	{
	    int n,x; cin >> n >> x;
	    int total=n*x;
	    if(total>=10000&&total<=99999) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
