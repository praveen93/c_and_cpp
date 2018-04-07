#include<stdio.h>
void maxheapify(int a[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && a[l]>a[largest])
	largest=l;
	if(r<n && a[r]>a[largest])
	largest=r;
	if(largest!=i)
	{
		int temp=a[largest];
		a[largest]=a[i];
		a[i]=temp;
		maxheapify(a,n,largest);
	}
}
void buildmaxheap(int a[],int n)
{
	int i;
	for(i=n/2;i>=0;i--)
	{
		maxheapify(a,n,i);
	}
}
void heapsort(int a[],int n)
{
	int i;
	buildmaxheap(a,n);
	for(i=0;i<=n-1;i++)
	{
		int temp=a[i];
		a[i]=a[0];
		a[0]=temp;
		n--;
		maxheapify(a,i,0);
	}
}
int heapmax(int a[],int n)
{
	maxheapify(a,n,0);
	int t=a[0];
	return t;
}
void heapdelete(int a[],int n,int i)
{
	a[i]=a[n-1];
	n--;
	maxheapify(a,n-1,i);
}
void heapextractmax(int a[],int n)
{
	heapdelete(a,n,0);
}
main()
{
	int a[]={128,54,64,37,27,49};
	int n=6;
	int i;
	heapsort(a,n);
	for(i=0;i<6;i++)
	printf("%d\n",a[i]);
	printf("heap maximum is %d\n",heapmax(a,n));
	heapdelete(a,n,3);
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
	printf("\n");
	
}
