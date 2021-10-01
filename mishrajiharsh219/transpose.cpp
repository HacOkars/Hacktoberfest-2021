#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[100][100],b[100][100]={0};
   int r,c;
   cout<<"give rows";
   cin>>r;
   cout<<"give column";
   cin>>c;
   for (int i = 0; i < r; i++)
   {
       for (int j = 0; j < c; j++)
       {
           cout << "enter a" << i + 1 << j + 1;
           cin >> a[i][j];
       }
   }
   for (int i = 0; i < c; i++)
   {
       for (int j = 0; j < r; j++)
       {
           b[i][j]=a[j][i];
       }
   }
   for (int i = 0; i < c; ++i)
   {
       for (int j = 0; j < r; ++j)
       {
           cout << b[i][j] << "  ";
           if (j == r- 1)
               cout << "\n";
       }
   }
    return 0;
}
