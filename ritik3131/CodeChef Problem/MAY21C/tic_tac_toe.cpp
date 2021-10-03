#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,i,a=0,b=0,x=0,o=0,other=0,j,k;
  cin>>t;
  for(i=0;i<t;i++)
    {
      char s[3][3];
      a=0,b=0,x=0,o=0,other=0;
      for(j=0;j<3;j++)
      {
        for(k=0;k<3;k++)
         {
           cin>>s[j][k];
           if(s[j][k]=='_')
            other++;
            else if(s[j][k]=='X')
                   x++;
                else if(s[j][k]=='O')
                   o++;
         }
      }

      if(x-o>1)
        {
          cout<<"3"<<endl;
          continue ;
        }
      else if(o>x)
        {
          cout<<"3"<<endl;
          continue ;
        }

      if(s[0][0]=='X'&&s[1][1]=='X'&&s[2][2]=='X')
             a=1;
           else if(s[2][0]=='X'&&s[1][1]=='X'&&s[0][2]=='X')
                  a=1;
                else if(s[0][0]=='O'&&s[1][1]=='O'&&s[2][2]=='O')
                        b=1;
                     else if(s[2][0]=='O'&&s[1][1]=='O'&&s[0][2]=='O')
                              b=1;
      for(j=0;j<3;j++)
      {
        if(s[j][0]=='X'&&s[j][1]=='X'&&s[j][2]=='X')
           a=1;
        else if(s[0][j]=='X'&&s[1][j]=='X'&&s[2][j]=='X')
               a=1;
       else  if(s[j][0]=='O'&&s[j][1]=='O'&&s[j][2]=='O')
            b=1;
        else if(s[0][j]=='O'&&s[1][j]=='O'&&s[2][j]=='O')
                b=1;
      }
      if(a==1&&b==0)
       {
         if(x>o)
           cout<<"1"<<endl;
         else
           cout<<"3"<<endl;
       }
       else if(b==1&&a==0)
             {
               if(x==o)
                cout<<"1"<<endl;
                else
                 cout<<"3"<<endl;
             }
             else if(b==0 && a==0 && other==0)
                   cout<<"1"<<endl;
      else if(a!=1&&b!=1&&other!=0)
           cout<<"2"<<endl;
           else
            cout<<"3"<<endl;
    }
}
