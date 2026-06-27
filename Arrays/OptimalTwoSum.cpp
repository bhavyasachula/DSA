#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//Optimal
vector<int> arr = {2,6,5,8,11};
int n =  arr.size();
int target = 14;
string TwoSum(vector<int> arr , int n,int target){
     int left=0;
    int right=0;
    int sum = arr[left]+arr[right];
    sort(arr.begin(),arr.end());
   
    while(left<right){
        
        if(sum == target){
            return "Target is Present";
        }
        else if(sum < target){
            left++;
        }
        else right--;

    }
}
int main(){

}