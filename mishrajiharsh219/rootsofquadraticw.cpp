#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    cout<<"Enter coefficients a, b and c: ";
    cin>>a>>b>>c;

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
       cout<<"root is"<<fixed<<setprecision(2)<<root1;
       cout << "root is" << fixed << setprecision(2) << root2;
    }

    // condition for real and equal roots
    else if (discriminant == 0)
    {
        cout << "root is" << fixed << setprecision(2) << root1;
    }

    // if roots are not real
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
       cout<<fixed<<setprecision(2)<<realPart;
       cout<<"+i"<<fixed<<setprecision(2)<<imagPart;
       cout << fixed << setprecision(2) << realPart;
       cout << "+i" << fixed << setprecision(2) << -imagPart;
    }

    return 0;
}
