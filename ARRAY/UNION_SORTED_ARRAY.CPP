#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector <int> sortedArray(vector<int> a, vector <int> b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0;i<n1;i++) {
        st.insert(a[i]);
    }
    for(int i = 0;i<n2;i++) {
        st.insert(b[i]);
    }
    vector <int> temp;
    for(auto it : st) {
        temp.push_back(it);
    }

    return temp;
}

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> a(n1);
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> b(n2);
    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    vector<int> result = sortedArray(a, b);

    cout << "Sorted Union Array: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}