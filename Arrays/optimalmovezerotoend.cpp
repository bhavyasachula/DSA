#include <iostream>
#include <vector>
using namespace std;
vector<int> arr = {0,645,0,0,78,55,221};

int n =  arr.size();

vector<int> OptimalMoveZeroToEnd(vector<int> arr, int n){
    // traverse the array;
    // Main intution here is we are moving the nonzero elements ahead by using swap with the writer
    int writer = 0 ;// both points to zero index of array;
    for(int reader=0;reader<n; reader++){
        //{0,645,0,0,78,55,221}
         if(arr[reader]!=0){
            int temp = arr[writer];
            arr[writer] = arr[reader];
            arr[writer] = temp;  
            writer++;
         } 
    }
    return arr;
}

int main(){

    
}