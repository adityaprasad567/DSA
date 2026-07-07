#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int longestSubArray(vector<int> &a, int k){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen=0;

    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if (sum == k){
            maxLen=max(maxLen,i+1);
        }
        long long rem = sum -k;
        if(preSumMap.find(rem) != preSumMap.end()){

        }
    }
}
int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long k;
    cout << "Enter value of k: ";
    cin >> k;

    int result = longestSubArray(a, k);

    cout << "Longest subarray length = " << result;

    return 0;
}