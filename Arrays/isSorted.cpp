#include <iostream>
#include <vector>
using namespace std;

  vector <int> arr = {3, 3, 0, 99, -40};
int n = arr.size();
int isSortedAsc(vector<int> arr,int n){
    for(int i=1;i<n;i++){ 
        if(arr[i]>=arr[i-1]){   
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){

    int isSorted = isSortedAsc(arr,n);
    cout<<"1) 1 means sorted \n2) 0 means unsorted \n\nAnswer:" << isSorted;
}