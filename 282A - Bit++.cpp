#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        x = ((s[1] == '+') ? x+1: x-1);
    }

    cout << x;
}
