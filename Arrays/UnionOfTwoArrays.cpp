#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> arr1 = {1,2,4,4,5,6,6};
vector<int> arr2 = {2,5,4,7,6,4};
set<int> st;

// vector<int> arr
int n1 = arr1.size();
int n2 = arr2.size();

vector<int> UnionTwoArrays(vector<int> arr1,vector<int> arr2){
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int j=0; j<n2 ; j++){
        st.insert(arr2[j]);
    }
    vector<int> unionn;

    for(int x: st){
        unionn.push_back(x);
    }
    return unionn;
}

int main(){
    for(int x : UnionTwoArrays(arr1,arr2)){
        cout<<x<<" ";
    }
}

