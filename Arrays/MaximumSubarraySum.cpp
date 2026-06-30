#include <iostream>
#include <vector>
using namespace std;

vector<int> arr={-2,-3,4,-1,-2,1,5,3};
int n=arr.size();
 
int maximumSubArray(vector<int> arr,int n){

    int maxi=INT32_MIN;
    /*this loop find every possible subarray and keep the maximum 
    sum into the max and returns the max*/
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i ; j<n ; j++){
            sum=sum+arr[j];
            if(sum>maxi){
                maxi=sum;
                int start=i;
                int end=j;
            }

        }
    }
    return maxi; 
}
int main()