#include <bits/stdc++.h>
using namespace std;

int Secondlargest(vector<int> &arr, int n) {
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i<n; i++){
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
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

    cout << " Second Largest element: " << Secondlargest(arr, n) << endl;

    return 0;
}