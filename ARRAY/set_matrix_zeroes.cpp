#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &a, int n, int m){

    // Step 1: Mark rows and columns
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(a[i][j] == 0){
                markRow(a, n, m, i);
                markCol(a, n, m, j);
            }
        }
    }
    
void markRow(vector<vector<int>> &a, int n, int m, int i){
    for(int j = 0; j < m; j++){
        if(a[i][j] != 0){
            a[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &a, int n, int m, int j){
    for(int i = 0; i < n; i++){
        if(a[i][j] != 0){
            a[i][j] = -1;
        }
    }
}



    // Step 2: Convert -1 into 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(a[i][j] == -1){
                a[i][j] = 0;
            }
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    setZeroes(a, n, m);

    cout << "Final Matrix:\n";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}