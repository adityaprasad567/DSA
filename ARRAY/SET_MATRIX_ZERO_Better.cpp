#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    int row[n] = {0};
    int col[m] = {0};

    // First traversal
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(matrix[i][j] == 0) {

                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Second traversal
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(row[i] || col[j]) {

                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main() {

    int n, m;

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Enter number of columns: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "\nFinal Matrix:\n";

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}