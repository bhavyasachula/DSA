#include <iostream>
#include <vector>
using namespace std;

vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
int n=arr.size();

int OptimalMaximumSubArraySum(vector<int> arr,int n){
    int sum=0;
    int maxi=0;
    for(int i=0 ; i<n ;i++){
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
        if(maxi<0){
            maxi=0;
        }
    }    
    return maxi;
}

int main(){
    cout<<"Maximum Subarray Sum is :"<<OptimalMaximumSubArraySum(arr,n);
}