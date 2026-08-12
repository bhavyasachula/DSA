#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> arr = {-1, 0, 1, 1, 2, -1, -4};
int n =  arr.size();

set<vector<int>> result ;
vector<vector<int>> Diff3sum(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    for(int i=0 ; i < n-2 ; i++){
        int left = i+1;
        int right = arr.size()-1;

        while(left<right){

        int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0){ 
                result.insert(arr);
            }
        }
    }
    vector<vector<int>> myanswer(result.begin(),result.end());
    return myanswer;
}

int main(){
    
    for(auto &type : Diff3sum(arr,n)){
        
    }
}