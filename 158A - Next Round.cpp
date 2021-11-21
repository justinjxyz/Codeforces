#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int pos[n];
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
    }

    int kFin = pos[k - 1];
    int progress = 0;
        for (int i = 0; i < n; i++)
            if (pos[i] != 0 && pos[i] >= kFin)
                ++progress;

    cout << progress;
}
