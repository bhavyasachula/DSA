#include<iostream>
#include<vector>
using namespace std;

vector<int> arr = {1,2,4,5,6,7,8};

int n = arr.size();

vector<int> leftRotateByK(vector<int> arr,int n,int d){
    int temp[d];
    // takes the k elements from the array
    for(int i=0 ; i<d ;i++){
        temp[i] = arr[i];
    }
    //shift to left
    for(int i=d; i<n ; i++){
        arr[i-d] = arr[i];
    }
    //adding the remaining elements
    for(int i=n-d; i<n ; i++){
        arr[i]=temp[i-(n-d)];
    }
    return arr;
}


int main(){

    int k=3;

    vector<int> leftrotatedArray = leftRotateByK(arr,n,k);

    cout<<"Left Rotated by "<<k<<" index :";

    for(int i=0;i<n;i++){
        cout<<" "<<leftrotatedArray[i];
    }

}