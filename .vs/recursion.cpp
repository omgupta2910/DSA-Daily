#include<iostream>

using namespace std;

bool isSorted(int arr[],  int size){
    if(size ==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr+1 , size-1);
        return remainingPartq;  
    }
}


int main(){
    int arr[5] = {2,3,5,6,8};
  

    bool ans = isSorted(arr,5);

    if(ans){
        cout<<"Sorted Array";
    }
    else{
        cout<<"Unsorted Array";
    }
}