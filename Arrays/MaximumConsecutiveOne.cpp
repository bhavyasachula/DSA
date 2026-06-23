#include <iostream>
#include <vector>
using namespace std;

// array of 1's and 0's elements 

vector<int> arr = {1,1,0,1,1,1,0,1,1};

int FindConsecutive1s(vector<int> arr){
    int counter = 0;
    int maxi = 0;
    
    for(int i = 0 ; i<arr.size(); i++){
        if(arr[i] != 0){
            counter++;
            if(maxi<counter){
                maxi=counter;
            } 
        }
        else{
            counter=0;
        }
    }
    return maxi;
}

int main(){
    cout <<"Maximum Consecutive 1's in Arrays is: "<< FindConsecutive1s(arr);
}