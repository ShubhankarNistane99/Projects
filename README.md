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
![hourglass_screenshot](https://user-images.githubusercontent.com/54000745/99625295-f1aa7900-2a55-11eb-89f2-2ee787c204cd.JPG)


# Find all substrings of a given string that contains all characters of other string in c++

## Code:-
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

//to find substring of str1 which are possible solutions of str2
void findsubstring(string str1,string str2)
{
    int x,y;

    if ((x = str2.length()) > (y = str1.length()))
    {
        return;
    }

    for(int i = 0; i <= y - x; i++)
    {
        if (is_permutation(str1.begin() + i, str1.begin() + i + x, str2.begin()))
		{
			cout << "Substring :" << str1.substr(i, x) << " present at index :" << i << '\n';
		}
    }

}

int main()
{
    string str1 = "XYYZXZYZXXYZ";
    string str2 = "XYZ";

    findsubstring(str1,str2);

    return 0;

}

## Output:-



