//https://www.codechef.com/problems/RIGHTTHERE
#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	for(int i=0;i<t;i++)
	{
	    int n,x; cin >> n >> x;
	    if(n<=x) 
	      cout << "YES\n";
	    else 
	      cout << "NO\n";
	}
	
	return 0;
}
