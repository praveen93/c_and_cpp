#include<iostream>
using namespace std;
int sqrt(int n)
{
	int low=1,high,mid;
	high=n;
	while(low<<high)
	{
	mid=(low+high)>>1;
	if(mid*mid==n)
	return mid;
	else if(mid*mid>n)
	high=mid-1;
	else
	low=mid+1;
	}
	return high;
}
int main()
{
int n;
cin>>n;
int res;
res=sqrt(n);
cout<<res;
return 0;	
}
