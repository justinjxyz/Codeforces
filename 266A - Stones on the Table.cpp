#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
 
    string s;
    cin >> s;

    int result = 0;
    for (int i = 0; i < n; i++) {
        if (i != 0 && (s[i] == s[i - 1])) {
            ++result;
        }
    }
    cout << result;
}
