#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr = {1,2,4,5,6,7,8};
vector<int> optimalLeftRotateByK(vector<int> arr,int n,int k){
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.begin()+n);
    reverse(arr.begin(),arr.end());    
    return arr;
}
int main(){
    int n = arr.size();
    vector<int> rotatedKtharray = optimalLeftRotateByK(arr,n,2);
    for(int x : rotatedKtharray){
        cout<< x;
    }
    
}