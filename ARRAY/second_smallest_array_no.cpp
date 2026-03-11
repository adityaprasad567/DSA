#include <bits/stdc++.h>
using namespace std;

int Secondsmallest(vector<int> &arr, int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i<n; i++){
        if(arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << " Second Smallest element: " << Secondsmallest(arr, n) << endl;

    return 0;
}