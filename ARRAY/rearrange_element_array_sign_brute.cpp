#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int rearrangeElement(vector<int> &arr, int n){
    vector<int> pos,neg;
    for(int i=0;i<n/2;i++){

        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }
}
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    rearrangeElement(arr, n);

    cout << "Rearranged array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}