#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {1,2,3,1,1,1,1,3,3};
int n = arr.size();

// Moore Voting algorithm

vector<int> OptimalMajorityElement(vector<int> arr,int n){
    int el=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(el==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
}

//{1,2,3,1,1,1,1,3,3}
int main(){
    
}