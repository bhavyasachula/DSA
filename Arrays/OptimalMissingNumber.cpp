#include <iostream>
#include <vector>
using namespace std;
int n=5;
vector<int> arr = {1,2,4,5};

int missingNumber(vector<int> arr , int n){
    int sum = (n * (n+1))/2; 
    
    int consecutiveArrSum=0;
    for(int i=0; i<arr.size() ; i++){ // 0,1,2,3,4
        consecutiveArrSum += arr[i];
    }
    
    return (sum - consecutiveArrSum);
}

int main(){
   cout<<"Missing Number from the Array:"<<missingNumber(arr,n);
}