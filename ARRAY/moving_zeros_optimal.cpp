#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {

    int j = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }

    // no non zero no
    if(j == -1) return a;

    for(int i = j+1;i<n;i++) {
        if(a[i] !=0) {
            swap(a[i],a[j]);
            j++;
        }
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
        vector<int> zeros_removed = moveZeros(n, a);

    cout << "Zeros Removed: ";
    for (int i = 0; i < n; i++) {
        cout << zeros_removed[i] << " ";
    }
    cout << endl;

    return 0;
}