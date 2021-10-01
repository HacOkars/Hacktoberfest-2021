#include <bits/stdc++.h>
using namespace std;
struct course{
    int marks;
    string subject;
};
int main()
{
    struct course *ptr;
    int n;
    cout<<"enter no. ";
    cin>>n;
    ptr = (struct course *)malloc(n * sizeof(struct course));
    for (int i = 0; i < n; i++)
    {
        cout<<"subject and marks";
        cin >>ptr->subject>>ptr->marks;
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "subject and marks";
        cout<<ptr->subject<<ptr->marks;
    }
      free(ptr);
        return 0;
}
