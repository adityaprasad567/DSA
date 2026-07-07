#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int findOnce(vector <int> &arr, int n){
    for(int i =0; i<n; i++){
        int num = arr[i];
        int cnt = 0;
    for(int j=0;j<n;j++){
        if(arr[j] == num)
        cnt++;
    }
    if(cnt==1) return num;
}
return -1;
}
int main(){

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = findOnce(arr, n);

    cout << "Element appearing once: " << ans;

    return 0;
}