#include <bits/stdc++.h>
using namespace std;
void print(int n) {
    for(int i = 0; i<n; i++) {
        //space
        for (int j = 0; j<n-i-1; j++) {
            cout << " ";
        }
        //character
        char ch = 'A';
        for (int j = 1; j<=2*i+1; j++) {
            cout << ch++;

        }
        // space
        for (int j = 0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        print(n);
    }
}