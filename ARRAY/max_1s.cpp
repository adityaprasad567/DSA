#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maximumOnes(vector<int> & nums) {
    int maxi = 0;
    int cnt = 0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i] == 1) {
            cnt ++;
            maxi = max(maxi,cnt);
        }
        else{
            cnt = 0;
        }

    }
    return maxi;

}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0 or 1): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = maximumOnes(nums);

    cout << "Maximum consecutive 1s: " << result;

    return 0;
}