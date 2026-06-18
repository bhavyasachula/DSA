// Optimal solution for Second largest 

#include <iostream>
#include <vector>
using namespace std;
// In global space of integer array is 10^7
//global array
vector<int> arr= {1,2,6,8,5};

int LargestandSecondLargest(vector<int> arr){
    int largest = arr[0];
    int secondLargest = -1;

for(int i = 0; i< arr.size(); i++){
    if(arr[i] > largest){
        secondLargest = largest; // previous largest moves to second largest
        largest = arr[i];
    }
    else if(arr[i] < largest && arr[i] > secondLargest){ 
        secondLargest = arr[i];
    } 
   }
  return secondLargest;
}
int main(){
    
    //In main function the integer array size is 10^6

    int secondLargest = LargestandSecondLargest(arr);
    cout<<"SecondLargest Elem: "<<secondLargest;
}
