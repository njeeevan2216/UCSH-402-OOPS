#include <iostream>

using namespace std;

int main()
{
    int i, j, count;
    count = 0;
    i = 0;
    for (j = -3; j <= 3; j++)
    {
        if((j>=0) && (i++))
        count = count + j;
    }
    count = count + i;
    cout << count << endl;
    return(0);
}