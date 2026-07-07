#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> a) {
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            return i;   // return index if found
        }
    }
    return -1;          // not found
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num;
    cout << "Enter element to search: ";
    cin >> num;

    int result = linearSearch(n, num, a);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}