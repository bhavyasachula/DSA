#include <iostream>
#include <vector>
using namespace std;

vector<int> arr = {1,2,4,54,6,65,1};

int n = arr.size();
int FindNum(vector<int> arr ,int n , int num){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == num);
        return 1;
    }
    return -1;
}

int main(){
    cout<<"Is Number \n 1 Present\n-1 Not present\n Answer:"<<FindNum(arr,n,65);
}