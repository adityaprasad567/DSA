#include <bits/stdc++.h>

#include <iostream>

using namespace std;

vector<vector<int>> Triplets(vector<int> &arr, int target){
    set<vector<int>> st;

    for(int i = 0; i<arr.size();i++){
        set<int> hashset;
        for(int j = i+1; j<arr.size(); j++){
            int third = target - (arr[i] + arr[j]);

            if(hashset.find(third) != hashset.end()){
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(),temp.end());
                st.insert(temp);

            }

            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans (st.begin(),st.end());
    return ans;


}

int main() {

    vector<int> arr = {2, 7, 4, 0, 9, 5, 1, 3};
    int target = 13;

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
 