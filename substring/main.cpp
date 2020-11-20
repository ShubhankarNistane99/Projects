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

