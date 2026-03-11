#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(vector<int> &arr, int n) {
    int temp = arr[0];
    for (int i = 1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main(){
    int n;
    cout << "Enter the number of array: ";
    cin >> n; 
    vector<int> arr(n);
    cout << "Enter Element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
        vector<int> rotated = rotateLeft(arr, n);

    cout << "Left Rotated array by one place: ";
    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }
    cout << endl;

    return 0;
}