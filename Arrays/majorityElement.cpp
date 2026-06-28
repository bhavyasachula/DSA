#include<iostream>
#include<vector>
using namespace std;
/*
    find the majority Element from the array;
    {1,1,1,2,2,1}
    Output :
    n=size of array
    return the element which appears n/2 times from the array

    */
vector<int> arr = {1,1,1,2,2,1};
int n=arr.size();

int MajorityElement(vector<int> arr ,int n){

    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>(n/2)) return arr[i];
    }
}

int main(){
    cout<<"Majority Element is:"<<MajorityElement(arr,n);                 
}