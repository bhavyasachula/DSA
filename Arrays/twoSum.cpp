#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {6,2,4,8,11};
int n=arr.size();
int twoSum = 14;

pair<int,int> twoSums(vector<int> arr , int n){
    for(int i=0 ; i < n ; i++){
        for(int j=i+1 ; j < n ; j++ ){

            if(arr[i] + arr[j] == twoSum){
                return {i,j+1};
            }  
       }
    }
}

int main(){
    pair<int,int> returnedIndex = twoSums(arr,n);
    cout<<"FirstIndexOfTwoSum:"<<returnedIndex.first<<"\n"<<"SecondIndexOfTwoSum:"<<returnedIndex.second;
}