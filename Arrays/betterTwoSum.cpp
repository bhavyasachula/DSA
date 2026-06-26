#include <iostream>
#include <vector>
#include<map>
using namespace std;

vector<int> arr = {6,2,4,8,11};
int n=arr.size();
int Target = 14;

pair<int,int> twoSums(vector<int> arr ,int Target, int n){
    map<int,int> mpp;

    for(int i=0; i<n ; i++ ){
        int num = arr[i];
        int moreNeeded  = Target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return {mpp[moreNeeded],i};
        }
        mpp[num] = i;
    }
    return {-1,-1};
}

int main(){
    
}