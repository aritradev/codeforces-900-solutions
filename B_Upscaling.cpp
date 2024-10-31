#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> computeLPS(string pattern) {
    int n = pattern.size();
    vector<int> lps(n);
    int len = 0; // Length of the previous longest prefix suffix

    lps[0] = 0;
    int i = 1;
    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int findShortestPatternLength(string s) {
    int n = s.size();
    vector<int> lps = computeLPS(s);
    int len = lps[n - 1];
    
    // If there's no repeating pattern, return the length of the string
    if (len == 0) return n;

    // Check if the remaining part of the string differs from the pattern at most at one position
    string pattern = s.substr(0, len);
    string remaining = s.substr(len);
    if (remaining.find(pattern) == string::npos || remaining.find_first_not_of(pattern) == string::npos || remaining.find_first_not_of(pattern) == remaining.size() - 1)
        return n;

    return len;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << findShortestPatternLength(s) << endl;
    }

    return 0;
}
