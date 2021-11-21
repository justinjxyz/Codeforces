#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void shortenWord (string word) {
    if (word.length() > 10) {
        char first = word.at(0);
        char last = word.at(word.length() - 1);
        
        int between = word.length() - 2;

        //Print it: first character, length, last character.
        cout << first << between << last << "\n";
    } else {
        //Print as is.
        cout << word << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int lines;
    cin >> lines;

    for (int i = 0; i < lines; i++) {
        string word; 
        cin >> word;

        shortenWord(word);
    }
}
