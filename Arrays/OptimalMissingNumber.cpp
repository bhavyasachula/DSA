#include <iostream>
#include <vector>
using namespace std;
int N=5;
vector<int> arr = {1,2,4,5};

// int missingNumber(vector<int> arr , int n){
//     int sum = (n * (n+1))/2;     
//     int consecutiveArrSum=0;
//     for(int i=0; i<arr.size() ; i++){ // 0,1,2,3,4
//         consecutiveArrSum += arr[i];
//     }
//     return (sum - consecutiveArrSum);
// }
// int main(){
//    cout<<"Missing Number from the Array:"<<missingNumber(arr,n);
// }
int xor1=0;
int xor2=0;

int missingNumber(vector<int> arr , int n){

    int n = N-1;
    for(int i=0 ; i<n; i++){  
         xor1 = xor1 ^ arr[i];
        // xoring till the fourth element element  
         xor2 = xor2 ^ (i+1);
        
    }
    //now xoring till the N=5
    xor1 = xor1 ^ N; 
    return (xor2 ^ xor1);
}

int main(){
    cout<<"Missing Number is :"<< missingNumber(arr,N);
}
