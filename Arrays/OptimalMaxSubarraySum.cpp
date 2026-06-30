#include <iostream>
#include <vector>
using namespace std;

vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
int n=arr.size();

int OptimalMaximumSubArraySum(vector<int> arr,int n){
    int sum=0;
    int maxi=0;
    for(int i=0 ; i<n ;i++){
        /*
        traverse the array and do not consider 
        the negative value and maintain the maxi(maximum) value 
        */
        sum=sum+arr[i];
        /*
        sum gets greater than maximum number 
        then assign the sum value into maxi
        */
        if(sum>maxi){
            maxi=sum;
        }
        /*
        if sum encounters any negative do not consider it 
        and reinitialize the sum value to 0
        */
        if(sum<0){
            sum=0;
        }
        /*
        if the subarray contains all the negative or 
        lessthan zero element then just return the zero not negative values
        */
        if(maxi<0){
            maxi=0;
        }
    }    
    return maxi;
}

int main(){
    cout<<"Maximum Subarray Sum is :"<<OptimalMaximumSubArraySum(arr,n);
}