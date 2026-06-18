#include<iostream>
#include<vector>
using namespace std;

vector<int> a = {1,4,5,5,56,6,4};

int SecondSmallestElem(vector<int> arr){
    int smallest = arr[0];
    int secondSmallest = 0;

    for(int i=0 ; i<arr.size();i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(arr[i] > smallest && arr[i]<secondSmallest){
            secondSmallest = a[i];
        }
    };
    return secondSmallest;
}
int main(){
   cout<<"Second Smallest Element:"<<SecondSmallestElem(a);
}