#include <iostream>
using namespace std;

main()
{
	int ar[5],i;
	for(i=0;i<=4;i++)
	{
		cout<<"Enter value"<<i+1<<"=";
		cin>>ar[i];
	}
	for(i=0;i<=4;i++)
	{
		if(ar[i]%2==0)
		cout<<ar[i]<<"\t";
	}
}
