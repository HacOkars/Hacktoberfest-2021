#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void hanoi(int n, char s, char h, char d, int &count) {
    if (n == 1) {
        count++;
        cout << count <<". Move plate " << n << " from " << s << " to " << d << "\n";
        return;
    }
    hanoi(n-1, s, d, h, count);
    count++;
    cout << count <<". Move plate " << n << " from " << s << " to " << d << "\n";
    hanoi(n-1, h, s, d, count);
}

int main() {
    int n;
    cin >> n;
    int count = 0;
    hanoi(n, 'A', 'B', 'C', count);
    return 0;
}
