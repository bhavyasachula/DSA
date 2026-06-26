#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> arr1 = {1,2,4,4,5,6,6};
vector<int> arr2 = {2,5,4,7,6,4};
set<int> st; // Declared a set for only unique elements

int n1 = arr1.size();
int n2 = arr2.size();

vector<int> UnionTwoArrays(vector<int> arr1,vector<int> arr2){
    for(int i=0;i<n1;i++){  
        st.insert(arr1[i]);
        /*using insert method to insert into the set 
         datastructure for only the unique elements of arr1*/ 
    }

    for(int j=0; j<n2 ; j++){
        st.insert(arr2[j]); /*Checking other unique elements from second array for arr2*/  
    }

    vector<int> unionn; /*Declared a final combined union array*/ 

    for(int x: st){
        unionn.push_back(x); 
        /*using vector pushback function to add the elements into the union vector array*/
    }
    return unionn;
}

int main(){
    /*Iterating a returned union array*/
    for(int x : UnionTwoArrays(arr1,arr2)){
        cout<<x<<" ";
    }
    
}

