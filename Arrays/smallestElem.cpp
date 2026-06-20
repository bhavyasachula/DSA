#include<iostream>
#include<vector>
using namespace std;

//Find the Smallest Element from the Array
vector<int> arr = {0,1,2,4,5,7,4};
int n=arr.size();

int SmallestElem(vector<int> arr,int n){
    // {0,1,2,4,5,7,4}
    //{4,5,7,2,1}
    int smallest = arr[0];
    for(int i = 0; i < n; i++ ){
        if(arr[i]<smallest){  
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    
    int smallestElement = SmallestElem(arr,n);
    cout<<"Smallest Element:"<< smallestElement;
}