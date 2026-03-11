// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int count = log10(n) + 1;
//     return count;


// }

#include <iostream>
using namespace std;

int main() {
    

    int n;
    cin >> n;
    while(n>0) {

      int cnt = 0;
       int ld = n%10;
        cnt = cnt +1;
        n = n/10;
        cout << cnt;
    }
}