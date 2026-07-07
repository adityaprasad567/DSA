#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i = 0; i <r; i++) {
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}