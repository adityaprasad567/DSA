#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void sortArray(vector<int> &arr, int n){
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements (only 0,1,2): ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sortArray(a, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}