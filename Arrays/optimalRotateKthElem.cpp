#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> optimalLeftRotateByK(vector<int> arr,int n,int k){
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.begin()+n);
    reverse(arr.begin(),arr.end());    
    return arr;
}
int main(){
    
}