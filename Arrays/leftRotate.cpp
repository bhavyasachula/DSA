#include<iostream>
#include<vector>
using namespace std;

vector<int> arr = {1,2,5,6,8};
//                i,       ,n-1

int n = arr.size();

vector<int> leftRotate(vector<int> arr,int n){
    int temp = arr[0];

    for(int i = 1; i<n ;i++ ){

        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;

    return arr;
    }

int main(){
     cout<<"left Rotated array:";
     vector<int> leftRotated = leftRotate(arr,n);
    for(int i=0;i<arr.size();i++){
        cout<<"\n"<< leftRotated[i] ;
    }
}