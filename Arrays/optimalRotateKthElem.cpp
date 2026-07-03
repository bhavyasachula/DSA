#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr = {1,2,3,4,5,6,7};
vector<int> optimalLeftRotateByK(vector<int> arr,int n,int k){
    k=k%n; // k should not be greater than array 
    reverse(arr.begin(),arr.end()); // first reverse the whole array
    reverse(arr.begin(),arr.begin()+k); // start reversing from start to kth element
    reverse(arr.begin()+k,arr.begin()+n); // then from kth element to end element
    return arr;
}
int main(){
    int n = arr.size();
    vector<int> rotatedKtharray = optimalLeftRotateByK(arr,n,2);
    for(int x : rotatedKtharray){
        cout<< x;
    }
    
}