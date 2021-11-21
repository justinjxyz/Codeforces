#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int lines;
    cin >> lines;

    int numberOfProblems = 0;

    for (int i = 0; i < lines; ++i) {
        int p, v, t;
        cin >> p >> v >> t;

        if ((p + v + t) > 1) {
            ++numberOfProblems;
        }
    }

    cout << numberOfProblems;
}
