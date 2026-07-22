#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> arr =  {{1,1,1},{1,0,1},{1,1,1}};

// The Core Idea

// Instead of allocating separate col[] and row[] arrays, it hijacks matrix[0][j] and matrix[i][0] as markers. The only edge case: matrix[0][0] can't serve both the first row AND first column, so col0 handles the first column separately.
int n = 3;
int m = 3;

vector<vector<int>> SetMatrixZero(vector<vector<int>>){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
        //   continuess..
        }
    }
}
// matrix[i][0] = 0 → row i needs zeroing
// matrix[0][j] = 0 → col j needs zeroing
// col0 = 0 → col 0 needs zeroing (tracked separately)