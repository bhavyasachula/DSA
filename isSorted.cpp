#include <iostream>
#include <vector>
using namespace std;

int isSortedAsc(vector<int> arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){   
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    vector <int> arr = {3, 3, 0, 99, -40};
    int isSorted = isSortedAsc(arr);
    cout<<"1) 1 means sorted \n2) 0 means unsorted \n\nAnswer:" << isSorted;
}