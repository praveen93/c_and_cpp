#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
	return a<b;
}
main()
{
	int a[10],b[10];
	int n;
	cin>>n;
	int i,j=0,max;
	for(i=0;i<n;i++)
	cin>>a[i];
	max=1;
	while(i<n)
	{
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		max++;	
	}
	b[j]=max;
	j++;
	}
	
	sort(b,b+j,comp);
	cout<<b[0];
}
