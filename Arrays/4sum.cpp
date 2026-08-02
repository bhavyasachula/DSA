#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> arr = {-1, 0,1,1, 2, -1, -4};
//4sum : find all unique quadruplets in an array that add up to a target.
//Approach:Sort + two outer loops + two pointers inside
//time complexity : O(n^3)
Key idea: Same as 3Sum but with one extra loop. Skip duplicates at all three levels (i, j, and after finding a match) to avoid repeated quadruplets.
vector<vector<int>> FourSum(vector<int> arr){

    
}

int main(){
    vector<vector<int>> result = FourSum(arr);
}