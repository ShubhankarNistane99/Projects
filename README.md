# Hour Glass Pattern in C++ 

The given code will print numeric pattern in the form of hour-glass of integer 7.

## Code:-

#include <iostream>

using namespace std;

int main()
{
    int i,j,k;

    // Loop for Printing First half of the hourglass pattern

    for(i=1;i<=7;i++)
    {
        // leaving 'i' spaces at beginning of each rows
        for(k=1;k<i;k++)
        {
            cout <<" ";
        }

        //printing i to the rows values at the end of each row
        for(j=i;j<=7;j++)
        {
            cout <<j<<" ";
        }

        cout << endl;
    }

    // Loop for Printing second half of the hourglass pattern
    for(i=7-1;i>=1;i--)
    {
        // leaving 'i' spaces at beginning of each rows
        for(k=1;k<i;k++)
        {
            cout <<" ";
        }

         //printing i to the rows values at the end of each row
         for(j=i;j<=7;j++)
         {
             cout << j << " ";
         }

         cout << endl;

    }
}

## Output:-





