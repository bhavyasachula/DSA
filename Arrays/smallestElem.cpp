#include<iostream>
#include<vector>
using namespace std;

//Find the Smallest Element from the Array

int SmallestElem(vector<int> arr){
    // {0,1,2,4,5,7,4}
    //{4,5,7,2,1}
    int smallest = arr[0];
    for(int i = 0; i < arr.size(); i++ ){
        if(arr[i]<smallest){  
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    vector<int> a = {0,1,2,4,5,7,4};
    int smallestElement = SmallestElem(a);
    cout<<"Smallest Element:"<< smallestElement;
}