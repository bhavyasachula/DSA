#include <iostream>
#include <vector>
using namespace std;


vector<int> arr = {1,1,2,2,2,4,4,4};
int n = arr.size();
/*
    Optimal Checking is unique and making unique array elements
*/
int insertIndex = 1;
int isUniqueBruteForce(vector<int> arr,int n){
    for(int i=1 ; i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[insertIndex] = arr[i];
            insertIndex++; 
        }
    }
    return insertIndex;
}

int main(){
 // brute for approach   
    cout<<"Unique Elements in an Array:"<<isUniqueBruteForce(arr,n);
}
