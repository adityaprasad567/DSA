#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int sortArray(vector<int> &a, int n) {
    int cnt0 = 0; int cnt1 = 1; int cnt2 = 2;

    for(int i =0; i < n; i++) {
        if(a[i]==0) cnt0++;
        else if(a[i]==1) cnt1++;
        else cnt2++;
    }
    for(int i=0; i <cnt0; i++) {
        a[i]=0;
    }
        for(int i=cnt0; i <cnt0+cnt1; i++) {
        a[i]=1;
    }
        for(int i=cnt0+cnt1; i <n; i++) {
        a[i]=2;
    }
    
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements (only 0,1,2): ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sortArray(a, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}