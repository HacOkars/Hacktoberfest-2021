#include <bits/stdc++.h>
using namespace std;
void rotatestl(int a[][100],int m,int n){
   
    for (int i = 0; i < m; i++)
    {
        int startcol = 0;
        int endcol = m - 1;
        while (startcol < endcol)
        {
            swap(a[i][startcol],a[i][endcol]);
            startcol++;
            endcol--;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<j)
            swap(a[i][j],a[j][i]);
        }
    }
    for (int i = 0; i < m; i++)
    {
    for (int j = 0; j < n; j++)
    {
       cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    
    
    
}
int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    int val=1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            a[i][j]=val;
            val+=1;
        }
        
    }
    rotatestl(a,m,n);
    return 0;
}