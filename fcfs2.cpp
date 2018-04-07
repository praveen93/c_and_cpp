#include <iostream>
#include <algorithm>
using namespace std;

int ab;

typedef struct schedule
{
	string pro_id;
	int at,bt,ct,ta,wt;
}schedule;

bool compare(schedule a,schedule b)
{
	return a.at < b.at;
}


int main()
{
	schedule pro[10];
	int n,i,j;

	cout<<"Enter the number of processes: ";
	cin>>n;
	cout<<"Enter the process id,arrival time,burst time :";

	for(i=0;i<n;i++)
	{
		cin>>pro[i].pro_id;
		cin>>pro[i].at;
		cin>>pro[i].bt;
	}

	sort(pro,pro+n,compare);

	pro[0].ct=pro[0].bt+pro[0].at;
	pro[0].ta=pro[0].ct-pro[0].at;
	pro[0].wt=pro[0].ta-pro[0].bt;

	for(i=1;i<n;i++)
	{
		ab=pro[i-1].ct;
		
		if(pro[i-1].ct<pro[i].at)
		{
			pro[i].ct=pro[i-1].ct+pro[i].bt+(pro[i].at-pro[i-1].ct);
		}
		else
		{

			pro[i].ct=pro[i-1].ct+pro[i].bt;

		}
		pro[i].ta=pro[i].ct-pro[i].at;
		pro[i].wt=pro[i].ta-pro[i].bt;
	}
	
	cout<<"pro id"<<"\t"<<"at"<<"\t"<<"bt"
		<<"\t"<<"ct"<<"\t"<<"ta"<<"\t"<<"wt";
		
		cout<<endl;

	for(i=0;i<n;i++)
	{
		cout<<pro[i].pro_id<<"\t"<<pro[i].at<<"\t"<<pro[i].bt
		<<"\t"<<pro[i].ct<<"\t"<<pro[i].ta<<"\t"<<pro[i].wt;
		
		cout<<endl;
	}
	
	return 0;
}
