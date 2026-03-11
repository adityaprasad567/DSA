#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int dup = n;
    int revNo = 0;
    while(n>0) {
        int ld = n % 10;
        revNo = (revNo * 10 + ld);
        n = n / 10;
    }
    if(revNo == dup){
        cout << "number is palimdrome";
    }
    else{
        cout << "number is not not palimdrone";
    }
}