#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> arr = {-1, 0, 1, 1, 2, -1, -4};
int n =  arr.size();

set<vector<int>> result ; // Set DataStructure for getting unique elements
vector<vector<int>> Diff3sum(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    for(int i=0 ; i < n-2 ; i++){
        int left = i+1;
        int right = arr.size()-1;

        while(left<right){

        int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0){ 
                result.insert({arr[i],arr[left],arr[right]});
                left++;
                right--;
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    vector<vector<int>> myanswer(result.begin(),result.end());
    return myanswer;
}

int main(){
    
    for(auto &result : Diff3sum(arr,n)){
        for(auto &ans : result){
            cout<<ans<<" ";
        }
    cout<<endl;
    }
}