#include<iostream>
#include<vector>
using namespace std;


int SecondSmallestElem(vector<int> arr){
    int smallest = arr[0];
    int secondSmallest = 0;
    //       {1,4,5,5,56,6,4}
    for(int i=0 ; i<arr.size();i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i]<secondSmallest){
            secondSmallest = arr[i];
        }
    };
    return secondSmallest;
}
int main(){
    vector<int> a = {1,4,5,5,56,6,4};
   cout<<"Second Smallest Element:"<<SecondSmallestElem(a);
}