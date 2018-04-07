#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0;
	while(a[i])
	{
		if(a[i]!=a[i+1])
		{
		cout<<a[i];
		break;
		}
		i=i+2;
	}
	return 0;
}
