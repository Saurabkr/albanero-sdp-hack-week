#include <stdio.h>
    void incrementArray(int[]);
    int main()
    {
 
        int i;
        int array[4] = {10, 20, 30, 40};
        incrementArray(array);
        for (i = 0; i < 4; i++)
           printf("%d\t", array[i]); 
        
 
    }
 
    void incrementArray(int arr[])
    {
 
        int i;
        for (i = 0; i < 4; i++)
            arr[i]++;    
 
    }
