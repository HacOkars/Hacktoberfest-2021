#include <bits/stdc++.h>
using namespace std;
void spiral(int a[][1000],int m,int n){
    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;
while(startrow<=endrow and startcol<=endcol)
{
    //for top row

for ( int i = startcol; i <=endcol; i++)
{
    cout<<a[startrow][i]<<" ";
}
startrow++;
cout << endl;
//for lasst column
for (int i = startrow; i <=endrow; i++)
{
    cout<<a[i][endcol]<<" ";
}
endcol--;
cout << endl;
//for last row
if(endrow>startrow){
for ( int i =endcol; i >=startcol; i--)
{
    cout<<a[endrow][i]<<" ";
}}
endrow--;
cout << endl; //for first column
if(endcol>startcol)
for (int i = endrow; i >=startrow; i--)
{
    cout<<a[i][startcol]<<" ";
}
startcol++;
cout<<endl;
}
}
int main()
{
    int m,n;
    cin >> m>>n;
    int a[m][1000];
    int val = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            val += 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    spiral(a,m,n);
    return 0;
}