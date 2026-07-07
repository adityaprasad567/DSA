#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int majorityElement(vector<int> &arr, int n){
    for(int i =0 ;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
            if(cnt>n/2) return arr[i];
        }
    }
    return -1;
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


    cout << "Majority Elements are: = " << majorityElement(a, n);
}