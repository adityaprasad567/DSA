#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                  // Input: number of elements
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];         // Input array elements
    }

    // Precompute frequency
    int hash[13] = {0};        // Declare a hash array of size 13 (index 0–12)
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;     // Count occurrences of each number
    }

    int q;
    cin >> q;                  // Number of queries
    while (q--) {
        int number;
        cin >> number;         // Query number
        cout << hash[number] << endl;  // Output how many times it appears
    }

    return 0;
}
