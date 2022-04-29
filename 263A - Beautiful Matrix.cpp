#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string line;
    int row = 0;
    int column = 0;
 
    for (int i = 0; true; i++) {
        getline(cin, line);
 
        if ((column = line.find('1')) != -1) {
            row = i;
            break;
        }
    }
 
    row +=1;
    column = (column + 2) / 2;
 
    cout << (abs(3 - row) + abs(3 - column));
}
