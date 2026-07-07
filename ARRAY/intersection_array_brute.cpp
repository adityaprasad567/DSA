#include<bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n, vector <int> &B, int m) {
    vector <int> ans;
    int vis[m] = {0};
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(A[i] == B[j] && vis[j] == 0) {
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }

            if(B[j] > A[i]) break;
        }
    }
    return ans;

}

int main() {

    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> A(n);

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> B(m);

    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++) {
        cin >> B[i];
    }

    vector<int> result = findArrayIntersection(A, n, B, m);

    cout << "Intersection Array: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}