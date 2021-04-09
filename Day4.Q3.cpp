#include <iostream>
#include <cstring>
using namespace std;

int main(){
  string names[10];

  for (int i=0;i<=9;i++){
    cout<<"Please enter name for student "<<i+1<<": ";
    cin>>names[i];
    }

for(int j=0;j<=9;j++){
names[j]=toupper(names[j]);
cout<<names[j]<<endl;
}


return 0;
}
