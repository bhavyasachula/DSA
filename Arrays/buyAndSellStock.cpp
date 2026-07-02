#include <iostream>
#include <vector>
using namespace std;

vector<int> arr ={7,1,3,4,6};
int n=arr.size();

int BuyAndSellStocks(vector<int> arr , int n){
     int mini=arr[0];
    int profit=0;
    int cost;
    for(int i=1;i<n;i++){
        cost = arr[i] - mini; 
        /* cost is the diffrence between the 
        minimum element with the i pointer element*/
        profit = max(profit,cost);
        mini=min(mini,arr[i]);
    }   
    return profit;
}
int main(){
   cout<<"Max Profit is :"<<BuyAndSellStocks(arr,n);
}