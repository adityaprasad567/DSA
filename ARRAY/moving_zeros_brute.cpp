#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> movingZeros(int n, vector<int> a) {

    vector<int> temp;
    for(int i = 0; i<n;i++) {
        if(a[i] !=0){
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();
    for(int i = 0;i<nz;i++) {
        a[i] = temp[i];
    }

    for(int i = nz; i<n; i++) {
        a[i] = 0;
    }

    return a;
}

int main(){
    int n;
    cout << "Enter the number of array: ";
    cin >> n; 
    vector<int> a(n);
    cout << "Enter Element: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
        vector<int> zeros_removed = movingZeros(n, a);

    cout << "Zeros Removed: ";
    for (int i = 0; i < n; i++) {
        cout << zeros_removed[i] << " ";
    }
    cout << endl;

    return 0;
}

