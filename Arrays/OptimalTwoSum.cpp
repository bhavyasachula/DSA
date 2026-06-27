#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//Optimal : Two pointer approach ;
// sort the array using sort function using alogrithm header
// left pointer starts from the 0th index and right pointer starts from the last index (n-1)
// checks if left crosses right pointer 
vector<int> arr = {2,6,5,8,11};
int n =  arr.size();
int target = 14;
string TwoSum(vector<int> arr , int n ,int target){
    int left=0;
    int right=n-1;
    sort(arr.begin(),arr.end());
   
    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            return "Target is Present";
        }
        else if(sum < target){
            left++;
        }
        else {right--;}

    }
    return "TARGEt is not present";
}
int main(){
    cout<<TwoSum(arr,n,target);
}