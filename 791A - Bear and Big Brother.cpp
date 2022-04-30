#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    int b;

    cin >> a >> b;

    int years = 0;
    for (;a <= b; years++) {
        a*= 3;
        b*= 2;
    }

    cout << years;
    return 0;
}
