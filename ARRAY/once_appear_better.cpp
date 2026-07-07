#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getSingleElement(vector<int> &arr, int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1)
        return it.first;
    }

    return -1;
}



int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = getSingleElement(arr,n);

    cout << "Single element is: " << result;

    return 0;
}