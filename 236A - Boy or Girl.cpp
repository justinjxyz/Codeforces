#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string input;
    cin >> input;
 
    unordered_set<char> uniqueChars;
    for (char c : input)
        uniqueChars.insert(c);
 
    cout << ((uniqueChars.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
}
