#include<stdio.h>
main()
{
	int a[10],i,l=0,n,max,s[10],k=0,j,x;
	printf("enter no. of numbers");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{
		i=j;
		x=a[i];
		while(x==a[i])
		{
			l++;
			i++;
		}
		s[k]=l;
		k++;
		l=0;
	}
	max=s[0];
	for(i=0;i<k;i++)
	{
		if(max<=s[i])
			max=s[i];
	}
	printf("maximum length is %d",max);
}
