//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,k;
	cin>>n>>k;
	int currentMin;
	bool startOfgroup=true;
	int groupCounter=0;
	for(int i=0;i<n;i++)
	{
		int value;
		cin>>value;
		if(startOfgroup)
		{
			currentMin=value;
			startOfgroup=false;
		}
		else
		currentMin=min(currentMin,value);
		groupCounter++;
		if(groupCounter==k||i==n-1)
		{
			cout<<currentMin<<" ";
			groupCounter=0;
			startOfgroup=true;
		}
	}
	return 0;
}