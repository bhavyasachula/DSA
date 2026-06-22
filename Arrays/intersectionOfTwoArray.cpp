#include <iostream>
#include <vector>
using namespace std;

//Optimal Approach

vector<int> a={1,2,4,5,6,7,7,6,7}; // Array should be sorted 
vector<int> b={1,2,4,5,7,65};
int n=a.size();
int m = b.size();
vector<int> IntersectionOfTwoArrays(vector<int> arr1,vector<int> arr2){     
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n and j<m){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    for(int x : IntersectionOfTwoArrays(a,b)){
        cout<<x<<" ";
    }
}