#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int countSubarray(vector<int>& arr, int K) {
    int n = arr.size();
    int cnt = 0;

    for(int i =0; i < n; i++) {
        for(int j = i; j < n; j++){

            int sum = 0;

            for(int k = i; k <=j; k++) {
                sum += arr[k];
            }

            if(sum == K)
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n, K;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> K;

    cout << countSubarray(arr, K);

    return 0;
}