#include<iostream>
using namespace std;
int main()
{

int no,m,s;

cout<<"Enter the no."<<endl;
cin>>no;

while(no>0)
{
m=no%10;
s=m*m;
cout<<s;
no=no/10;


}

return 0;
}
