#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int CountsubArray(vector<int> &a, int K){
    int cnt = 0;
    for(int i = 0; i <a.size(); i++){
        int sum = 0;
        for (int j = i; j < a.size(); j++){
            sum += a[j];

            if(sum==K)
            cnt++;

        }
    }

    return cnt;
}
int main() {
    int n, K;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> K;

    cout << CountsubArray(a, K);

    return 0;
}