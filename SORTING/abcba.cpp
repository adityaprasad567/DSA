#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // spaces (optional)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter value of n: ";
        cin >> n;
        print(n);
        cout << endl; // for spacing between test cases
    }

    return 0;
}
