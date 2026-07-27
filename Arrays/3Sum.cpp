#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> arr = {-1,1,2,7,6,4};
set<vector<int>> st;
int n = arr.size();
int ThreeSum(vector<int> arr,int n){
    for(int i=0; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            for(int k=j+1 ; k<n ; k++){
                if(arr[i] + arr[j] + arr[k] == 0){

                }
            }
        }
    }
}

int main(){
    int ans = ThreeSum(arr,n);
}
