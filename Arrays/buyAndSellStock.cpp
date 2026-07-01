#include <iostream>
#include <vector>
using namespace std;

vector<int> arr ={7,1,3,4,6};
int n=arr.size();

int main(){
    int mini=arr[0];
    int profit=0;
    int cost;
    for(int i=1;i<n;i++){
        cost = arr[i] - mini;
        profit = max(profit,cost);
        mini=min(mini,arr[i]);
    }   
    return mini;
}