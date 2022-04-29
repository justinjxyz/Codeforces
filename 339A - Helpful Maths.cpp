#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
 
    string one;
    string two;
    string three;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            switch (s[i]) {
                case '1' :
                    one += "1+";
                    break;
                case '2' :
                    two += "2+";
                    break;
                case '3' :
                    three += "3+";
                    break;
            }
        }
    }
 
    string output = one + two + three;
    output.pop_back();
    cout << output;
}
