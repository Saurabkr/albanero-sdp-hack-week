#include<stdio.h>
#include<iostream>
using namespace std;
 main()
{
	int a[10];
	cout<<"\n Enter 10 integers=";
	for(int i=0; i<10; i++)
	{
		cin>>a[i];
	}
	
	int sum=0;
	for(int i=0;i<10;i++)
	{
		sum=sum + a[i];
		
		
	}
	if(sum%2==0)
	 {
	 	cout<<"EVEN";
	 }
	 else
	 {
	 	cout<<"ODD";
	 }
	 
	return 0;
	
		
	
}
