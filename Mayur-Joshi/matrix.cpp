#include<iostream>
using namespace std;

class matrix
{
    int r, c, a[10][10];
    public:void read()
            {
                cout<<"Enter the values of row and column:\n";
                cin>>r>>c;
                cout<<"Enter the matrix elements\n";
                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        cin>>a[i][j];
                    }
                }
            }
            int friend operator ==(matrix m1, matrix m2)
            {
                if(m1.r == m2.r && m1.c == m2.c)
                    return 1;
                else
                    return 0;
            }
            matrix friend operator +(matrix m1, matrix m2)
            {
                matrix temp;
                temp.r = m1.r;
                temp.c = m1.c;
                for(int i=0;i<m1.r;i++)
                {
                    for(int j=0;j<m1.c;j++)
                    {
                        temp.a[i][j] = m1.a[i][j] + m2.a[i][j];
                    }
                }
                return temp;
            }

            matrix friend operator -(matrix m1, matrix m2)
            {
                matrix temp;
                temp.r = m1.r;
                temp.c = m1.c;
                for(int i=0;i<m1.r;i++)
                {
                    for(int j=0;j<m1.c;j++)
                    {
                        temp.a[i][j] = m1.a[i][j] - m2.a[i][j];
                    }
                }
                return temp;
            }
            friend ostream& operator <<(ostream &o, matrix &m)
            {
                for(int i=0;i<m.r;i++)
                {
                    for(int j=0;j<m.c;j++)
                    {
                        cout<<m.a[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                return o;
            }
};

int main()
{
    matrix m1, m2, m3, m4;
    m1.read();
    m2.read();
    if(m1 == m2)
    {
        m3 = m1 + m2;
        m4 = m1 - m2;
        cout<<"After addition:\n";
        cout<<m3;
        cout<<"After subtraction:\n";
        cout<<m4;
    }
    else
        cout<<"Matrices incompatible";
    return 0;
}