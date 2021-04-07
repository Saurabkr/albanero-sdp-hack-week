#include <iostream>

using std::cout;
using std::endl;

void DisplayB(int b[][2], int row, int col, int total);


int main()
{
    int total = 0;

    int b[2][2] = { 1, 1 , 0, 0 };

    DisplayB(b, 2, 2, total);


}

void DisplayB(int b[][2], int row, int col, int total)
{
    total = 0;
    cout << "Array c using the display function: " << endl;
    for (int i = 0; i<row; i++)   
    {
        for (int j = 0; j<col; j++) 
        {
            cout << b[i][j] << "  ";

            total+=b[i][j];   
        }
    
        cout << endl;
    }
    cout<<"\nTotal = " << total << endl;
}
