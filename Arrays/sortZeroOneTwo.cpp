#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {1,0,0,1,1,0,0,0,0,0,2,2,2,2,2,2,1,1,1,1};

int n = arr.size();
vector<int> SortArray012(vector<int> arr , int n){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else cnt2++;
   }
   for(int i=0;i<cnt0;i++) arr[i]=0;
   for(int j=cnt0;j<cnt0+cnt1;j++) arr[j]=1;
   for(int k=cnt0+cnt1;k<n;k++) arr[k]=2;

   return arr;
}

int main(){
    for(int x:SortArray012(arr,n)){
        cout<<x<<"\n";
    }
}







