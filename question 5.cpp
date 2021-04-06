#include<iostream>
#include<string>
using namespace std;

int sinOutNumber(int arr[], int n){
    int x=0;
    int res;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            x++;
        }
    }
    if(x==1){
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                res=arr[i];
            }
        }
      
    }
    else{
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                res=arr[i];
            }
        }
    }
    return res;
}

int main(){
    cout<<"Enter the number of elements in an array "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the values of each element in an array "<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The outlier number is"<<" ";
    cout<<sinOutNumber(arr,n)<<endl;

    return 0;
}
