#include <iostream>
using namespace std;
 
void CountingEvenOdd(int arr[], int arr_size)
{
    int even_count = 0;
    int odd_count = 0;
 
    
    for (int i = 0; i < arr_size; i++) {
         
        
        if (arr[i] & 1 == 1)
            odd_count++;
        else
            even_count++;
    }
 
    cout << "Number of even elements = " << even_count
         << "\nNumber of odd elements = " << odd_count;
}
 

int main()
{
    int arr[] = { 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
       
      
    CountingEvenOdd(arr, n);
}
