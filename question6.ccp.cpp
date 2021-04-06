#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
     cout<<"Enter the first number of A.P=";
    cin>>a;
     cout<<"Enter the common difference=";
     cin>>b;
     cout<<"Enter the last number=";
     cin>>c;
z:
if(a<=c)
{ 
   cout<<a>>"\t";
    a=a+b;
    goto z;
}
else{
	if(d>c)
	 {cout<<"It is not valid";
	 }
}
return 0;
}
