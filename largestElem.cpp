#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    vector<int> arr= {1,2,4,2,5};
    int largest = arr[0];

for(int i = 0; i< arr.size(); i++){
    if(arr[i] > largest){
        largest = arr[i];
    }

}
cout<<"largest Element from the array:" << largest;
  
}