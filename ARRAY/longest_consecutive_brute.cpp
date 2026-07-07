#include <bits/stdc++.h>
using namespace std;

bool lsearch(vector<int> &arr, int num){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == num) return true;
    }
    return false;
}

int longestConsecutive(vector<int> &a){
    int n = a.size();
    if(n == 0) return 0;

    int longest = 1;

    for(int i = 0; i < n; i++){
        int x = a[i];
        int cnt = 1;

        while(lsearch(a, x + 1) == true){
            x = x + 1;
            cnt = cnt + 1;
        }

        longest = max(longest, cnt);
    }

    return longest;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int result = longestConsecutive(a);
    cout << "Longest Consecutive Length: " << result;

    return 0;
}