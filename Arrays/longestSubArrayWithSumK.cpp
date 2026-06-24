#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {1,2,3,1,1,1,1,3,3};
int n = arr.size();
long long k = 6;
int longestSubArrayWithSumK(vector<int> arr,int n,long long k ){
    int left = 0; //left pointer 
    int right = 0; //right pointer
    long long sum = arr[0];
    int maxLen=0;
    while(right<n){ 
    //loop until the array length excedded
        if(sum == k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right< n)
    }
}