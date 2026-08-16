#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//inplace sorting
//Dutch national flag
vector<int> nums = {2,0,2,1,1,0};
int n = nums.size();

void SortColor(vector<int> &nums,int n){
int start = 0;
int midptr = 0;
int end = n-1;
while(midptr <= end){
    switch(nums[midptr]){ // 
        case 0:
            swap(nums[start],nums[midptr]);
            start++;
            midptr++;
            break;
        case 1:
            midptr++;
            break;
        case 2:
            swap(nums[],nums[end]);
            end--;
            break;
    }
}
for(auto &res:nums){
    cout<<res<<" ";
   }
}

int main(){
    SortColor(nums,n);
}