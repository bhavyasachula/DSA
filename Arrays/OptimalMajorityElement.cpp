#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {1,2,3,1,1,1,1,3,3};
int n = arr.size();
/*
    find the majority Element from the array;
    {1,1,1,2,2,1}
    Output :
    n=size of array
    return the element which appears n/2 times from the array

    */
// Moore Voting algorithm
// the goal was this (N/2)
pair<int,int> OptimalMajorityElement(vector<int> arr,int n){
    int el=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(el==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    return {el,cnt};
    //why this loop for checking the majority element 
    int cnt1=0;
    for(int j=0;j<n;j++){
    
    }
}


//{1,2,3,1,1,1,1,3,3}
int main(){
    pair<int,int> x = OptimalMajorityElement(arr,n);
    cout<<"Element="<<x.first <<"cnt="<<x.second<<"\n";
 
    
}