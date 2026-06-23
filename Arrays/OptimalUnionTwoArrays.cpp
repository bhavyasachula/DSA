#include <iostream>
#include <vector>
using namespace std;
// array will always be sorted array  

vector<int> a={1,1,2,3,4,5}; 
// extra while loop is for this wht if the one pointer completes the array;
vector<int> b={2,3,4,4,5,6}; 
//it can be both
vector<int> optimalUnionofTwoArrays(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionnArr;
    
    while(i<n1 and j<n2){
        if(a[i] <= b[j]){
            if(unionnArr.size()==0 || unionnArr.back() != a[i]){
                unionnArr.push_back(a[i]); 
            }
            i++;
        }
        else{
            if(b[j] <= a[i]){
                if(unionnArr.size()==0 || unionnArr.back() != b[j]){
                    unionnArr.push_back(b[j]);
                }
                j++;
            }
        }
    }
    while(j<n2){
        if(b[j] <= a[i]){
            if(unionnArr.size()==0 || unionnArr.back() != b[j]){
            unionnArr.push_back(b[j]);
        }
        j++;
    }
}
    while(i<n1){
        if(a[i] <= b[j]){
            if(unionnArr.size()==0 || unionnArr.back() != a[i]){
                unionnArr.push_back(a[i]); 
            }
            i++;
    }
}

     return unionnArr;
}

int main(){
    for(int x:optimalUnionofTwoArrays(a,b)){
        cout<<x<<" ";
    }
}