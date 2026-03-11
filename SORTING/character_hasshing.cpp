#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
                 // Input: number of elements
    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash [s[i]]++;         // Input array elements
    }

    // Precompute frequency
    int q;
    cin >> q;                  // Number of queries
    while (q--) {
        char c;
        cin >> c;  
        //fetch       // Query number
        cout << hash[c] << endl;  // Output how many times it appears
    }

    return 0;
}
