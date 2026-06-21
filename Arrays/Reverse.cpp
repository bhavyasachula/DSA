#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> arr = {1,2,4,5,6,7};

vector<int> ReverseArray(vector<int> arr , int startindex , int lastindex){
    for(int i = lastindex-1 ; i>=startindex ; i--){
       cout<<arr[i];
    }
}

int main(){
    int startindex = 0;
    int lastindex = arr.size();
    ReverseArray(arr,startindex,lastindex);
    
}