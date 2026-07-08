#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr =  {{1,1,1},{1,0,1},{1,1,1}};
int n=3;
int m=3;
vector<vector<int>> setMatrixZero(vector<vector<int>> arr , int n,int m){
    vector<bool> rows(n, false), cols(m, false);
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i][j] == 0){
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             // Mark cell (i, j) with zero if either
            // of rows[i] or cols[j] is true
            if (rows[i] || cols[j])
                arr[i][j] = 0;
        }
    }
}