#include <iostream>
#include <string>

using namespace std;
int main()
{

// lets declare some variable first.
  int positiveSum =0;  //this will hold sum of positive nums
int negativeSum =0;
 

int number=0; 
for (int i = 1; i <=10; i++)  
{
    cout << " Enter a number: ";
    cin >> number;
    
    
    if (number >=0)
    {
        positiveSum += number;  
    }
    else if (number < 0)
   {
       negativeSum += number;  
   }

} 




cout << endl;
cout << " Total of Positive numbers is: " << positiveSum << endl;
cout << " Total of Negative numbers is: " << negativeSum << endl;

return 0;
}
