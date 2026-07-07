#include <bits/stdc++.h>
using namespace std;

pair<string, vector<int>> read(int n, vector<int> book, int target) {
    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        int a = book[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()) {
            return {"YES", {mpp[more], i}};
        }

        mpp[a] = i;
    }

    return {"NO", {-1, -1}};
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> book(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> book[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    auto result = read(n, book, target);

    cout << result.first << endl;

    if(result.first == "YES") {
        cout << "Indices: " << result.second[0] << " " << result.second[1];
    }

    return 0;
}