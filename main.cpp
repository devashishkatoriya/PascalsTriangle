//Program to display Pascal's Triangle
/*
 *      1
 *     1 1
 *    1 2 1
 *   1 3 3 1
 *  1 4 6 4 1
 */

#include <iostream>

using namespace std;

#define LIMIT 20

int main()
{
    int i,j,n,row[LIMIT][LIMIT];
    cout<<"\nEnter the no. of lines : ";
    cin>>n;
    row[0][0] = 1;
    for(i=1;i<LIMIT;i++)
    {
        row[0][i] = 0;
    }
    for(i=1;i<=n;i++)
    {
        for (j = 0; j<=i; j++)
        {
            if (j == 0 || j == i)
            {
                row[i][j] = 1;
            }
            else
            {
                row[i][j] = row[i - 1][j - 1] + row[i - 1][j];
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout<<endl;
        for (j = 0; j<=i; j++)
        {
            cout<<"\t"<<row[i][j];
        }
    }
    return 0;
}