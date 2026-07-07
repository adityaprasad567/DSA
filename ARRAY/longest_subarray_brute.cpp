#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int longestSubArray(vector<int> &a, int k)
{
    int n = a.size();
    int maxLen= 0;

    for(int i =0; i < n; i++) {
        int sum = 0;

        for(int j = i; j<n; j++){
            sum += a[j];

            if(sum ==k) {
                maxLen = max(maxLen,j-i+1);
            }
        }

    }

    return maxLen;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    cout << "Longest length = " << longestSubArray(a, k);
}