#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    for(int i = 0; i<n/2 ;i++){
        int a = n-i-1;
        swap(arr[i],arr[a]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
