#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string inputOne;
    string inputTwo;

    cin >> inputOne >> inputTwo;

    if (inputOne == inputTwo) {
        cout << 0;
    } else {
        for (int i = 0; i < inputOne.size(); i++) {
            if (inputOne[i] < 91)
                inputOne[i] += 32;

            if (inputTwo[i] < 91)
                inputTwo[i] += 32;
        }

        if (inputOne == inputTwo)
            cout << 0;
        else
            cout << ((inputOne < inputTwo) ? -1 : 1);
    }
}
