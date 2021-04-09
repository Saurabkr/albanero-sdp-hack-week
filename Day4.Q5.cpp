#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> & v)
{
	int sum1=0, sum2=0;
	while(v[0] || v[1]>0)
	{
	  int rem1 = v[0]%10;
	  sum1 += rem1;
	  int rem2 = v[1]%10;
	  sum2 += rem2;
	  v[0] /= 10;
	  v[1] /= 10;
	  
	 
}
  if(sum1==sum2)
     return true;
     return false;
 }
 int main()
 {
 	vector<int> v(2);
	 for(int i=0;i<v.size();i++)
	 {
	 	cin>>v[i];
	  }
	  if(solve(v))
	  {
	  	cout<<"true"<<endl;
	   } 
	   else
	       cout<<"false"<<endl;
	       return 0;
	 
	  
}
