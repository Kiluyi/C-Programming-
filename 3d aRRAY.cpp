// 3d aRRAY
#include <iostream>
using namespace std;
int main() {
   int a[2][2][3]={{{1,2,3},
                   {4,5,6}},
                   {{7,8,9},
                   {10,11,12}}};
char i,j,k;
//for matrices
for(i=0;i<2;i++)
{
    //for rows
    for(j=0;j<2;j++)
    {
        //for columns
        for(k=0;k<3;k++)
        {
            cout<<a[i][j][k]<<"";
        }
    }
}

    return 0;
}