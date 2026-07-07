#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getSingleElement(vector<int> &arr){
    int xorr = 0;
    for(int i = 0;i<arr.size();i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
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

    int result = getSingleElement(arr);

    cout << "Single element is: " << result;

    return 0;
}