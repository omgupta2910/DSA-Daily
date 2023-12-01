#include<iostream>
using namespace std;

bool isPresent(int arr[] , int end, int element, int start = 0) {
    if(start>end) {
        return 0;
    }
    
    int mid  = start + (end-start)/2;
    if(arr[mid] == element){
        return 1;
    }
    if(arr[mid]>element){
        return isPresent( arr , mid-1,element,start);
    }
    if(arr[mid]<element){
        return isPresent( arr , end,element, mid+1);
    }
    return 0;

}

int main(){
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    int element = 99;
    int s = arr[0];
    bool ans = isPresent(arr,size,element,0);
    if(ans){
        cout<<endl<<"Present"<<endl<<endl;
    }
    else{
        cout<<endl<<"Not Present"<<endl<<endl;
    }
}