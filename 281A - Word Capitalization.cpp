#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    input[0] = (input[0] > 90) ? input[0] - 32 : input[0];
    cout << input;
}
