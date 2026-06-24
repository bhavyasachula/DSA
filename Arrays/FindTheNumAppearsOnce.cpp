#include <iostream>
#include <vector>
using namespace std;
//Find Num Appearing Once In Array And Other Twice

//Note: 
/* the array should have only elements should be in pair or should 
 be in (power of 2) of two elements*/

vector<int> arr = {1,1,2,4,4,4,4,5,5};
int n=arr.size();

int FindNumAppearingOnce(vector<int> arr,int n){
    int XOR=0;
    for(int i=0 ; i<n ;i++){
        XOR = XOR ^ arr[i];
    }
    return XOR;
}

int main(){
    cout<<"Appearing Once from the Array is:"<<FindNumAppearingOnce(arr,n);
}