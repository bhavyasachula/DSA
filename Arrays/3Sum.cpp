#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
/*
Three sum problem statement : 
-> Get unique triplets from the array which sum up to 0 means [ [-1,0,1] sums = 0 ]
*/
vector<int> arr = {-1,1,2,7,6,4};
set<vector<int>> st;
int n = arr.size();
vector<vector<int>> ThreeSum(vector<int> arr,int n){
    for(int i=0; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            for(int k=j+1 ; k<n ; k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                     sort(temp.begin(),temp.end());
                     st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<vector<int>> ans = ThreeSum(arr,n);
    for(const auto& triplet:ans ){
        cout<<"[";
        for(int x : triplet){
            cout<<n<<"\n";
        }
        cout<<"]";
    }
}
