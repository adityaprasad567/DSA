#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<int>> Triplets(vector<int> &arr, int target){

    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0; i< arr.size(); i++) {
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j = i + 1;
        int k = n-1;
        while(j<k) {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < target) {
                j++;
            }
            else if(sum > target) {
                k--;
            }
            else{
                vector<int> temp = {arr[i] , arr[j] , arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k-1]) k--;
            }
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {-2, 0, -2, 0, 1, 1, 6, -4};
    int target = 0;

    vector<vector<int>> ans = Triplets(arr, target);

    if(ans.empty()){
        cout << "No triplet found.";
    }
    else{
        cout << "Triplets are:\n";
        for(auto it : ans){
            for(auto x : it)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}