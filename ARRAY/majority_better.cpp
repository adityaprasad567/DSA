//using hashing

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int majorityElement(vector<int> &arr, int n){
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(arr.size()/2)){
            return it.first;
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