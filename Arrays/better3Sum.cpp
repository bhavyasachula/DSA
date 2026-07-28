#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

/*
brute approach: n^3 -> previous logic arr[i]+arr[j]+arr[k] == 0
Better approach: n^2  
    First we need to remove the third loop that we are using in brute force approach
*/
vector<int> arr = {-1, 0, 1, 2, -1, -4};
int n = arr.size();
vector<vector<int>> Better3Sum(vector<int> arr , int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            /*logic here*/
        }
    }
}
int main(){
    vector<vector<int>> ans = Better3Sum(arr,n);
}