#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int k=0;k<size;k++){
        if(arr[k]==key){
            return 1;
        }
        return 0;
    }
}  

int main(){
    int arr[6]={4,4,3,2,2};
    
    int ans = 0;

    for(int i = 0;i<6;i++){
        ans = ans^arr[i];
    }
    cout<<ans;
    // for(int i=0;i<5;i++){
    //     int key = arr[i];
    //     bool found=search(arr,5,arr[i]);
    //     if(found){
    //         cout<<key;
    //     }
        
        
    // }
} 