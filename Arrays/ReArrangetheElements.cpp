#include <iostream>
#include <vector>
using namespace std;
//Optimal ReArrange the array into the pos neg pos neg pos neg sequence
vector<int> arr = {4,1,-2,-5,2,-4};
int n=arr.size();

vector<int> ReArrangeElements(vector<int> arr , int n){
    
    vector<int> reArrange(n,0);
    
    int posIndex=0; /*We are maintaining two pointers one is for postive and another is is negative pointer*/
    int negIndex=1; 
    /*  postive index starts from 0 because of even index to put into it and
        negative index starts from 1 because of the odd index to put negative values  */
    for(int i=0 ; i<n+1 ; i++){
        
        if(arr[i]>0){
            reArrange[posIndex] = arr[i];
            /*In this we cannot increase the i because i counter will go to end 
            so we need to use the seperate pointer */
            posIndex=posIndex+2;
        }
        else{
            reArrange[negIndex] = arr[i];
            negIndex+=2;
        }
    }
    return reArrange;
}
int main(){
    
    for(int it:ReArrangeElements(arr,n)){
        cout<<it<<" ";
    }
    
}