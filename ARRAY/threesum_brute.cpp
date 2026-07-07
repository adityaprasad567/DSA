#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int threeSum(vector<int> &nums, int target){
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            for(int k = j+1; k<nums.size(); k++){
                if(nums[i]+nums[j]+nums[k] == target){
                    cout << "Triplet found: "
                         << nums[i] << " "
                         << nums[j] << " "
                         << nums[k] << endl;
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    vector<int> nums = {2, 7, 4, 0, 9, 5, 1, 3};
    int target = 6;

    if (!threeSum(nums, target))
        cout << "No triplet found.";

    return 0;
}