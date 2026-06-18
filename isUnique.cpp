#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<int> st;

vector<int> arr = {1,1,2,2,2,4,4,4};

int isUniqueBruteForce(vector<int> arr){
    for(int i=0 ; i<arr.size();i++){
        st.insert(arr[i]);
    }
    return st.size();
}

int main(){
 // brute for approach   
    cout<<"Unique Elements in an Array:"<<isUniqueBruteForce(arr);
}
