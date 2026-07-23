#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> matrix =  {{1,1,1},{1,0,1},{1,1,1}};

// The Core Idea

// Instead of allocating separate col[] and row[] arrays, it hijacks matrix[0][j] and matrix[i][0] as markers. The only edge case: matrix[0][0] can't serve both the first row AND first column, so col0 handles the first column separately.
int n = 3;
int m = 3;
int col0 = 1;
vector<vector<int>> SetMatrixZero(vector<vector<int>> martix){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j!=0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }
}
// matrix[i][0] = 0 → row i needs zeroing
// matrix[0][j] = 0 → col j needs zeroing
// col0 = 0 → col 0 needs zeroing (tracked separately)