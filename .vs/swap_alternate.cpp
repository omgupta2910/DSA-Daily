#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,3,1,6,3,6,2};

    for(int i=0;i<7;i++){
        int m = arr[i];

        for(int n=i+1;n<7;n++){
            if(m==arr[i]){
                
            }
            else{
                cout<< arr[i]<<" ";
            }
        }
    }
}