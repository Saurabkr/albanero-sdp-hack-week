#include<iostream>
using namespace std;
int main()
{

int a[3][3],i,j;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"Enter number :";
cin>>a[i][j];
}
}

for(i=2;i>=0;i--)
{
for(j=2;j>=0;j--)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}

return 0;
}
