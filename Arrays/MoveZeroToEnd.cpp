#include <iostream>
#include <vector>
using namespace std;
//Brute Force -Move Zero To End;
vector<int> outerarr = {1,2,4,0,0,0,7,8,2};

int n=outerarr.size();
vector<int> moveZeroTEnd(vector<int> arr,int n){
    vector<int> temp = {};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for(int i = nz;i<n;i++){
        temp.push_back(0); // putting all zeros at remaining empty spaces of an array 
    }
    return temp;
}

int main(){
    
    vector<int> arr = moveZeroTEnd(outerarr,n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
}