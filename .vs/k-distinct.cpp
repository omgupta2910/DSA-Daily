#include<iostream>
using namespace std;

int Solve(int arr[],int k){
    int count = 0;
    int i = 0;
    while(i<(6-k)){
        for(int window = i; window < i+k; window++){
            for(int window2 = window+1 ; window2 < i+k; window2++){
                if(arr[window] != arr[window2]){
                    count+=2;
                }else{
                    count++;
                }
            }
        } 
        i++;       
    }
    count++; //for the initial element
    
    return count;
} 


int main(){
    int arr[6] = {1,2,3,3,4,5};
    int k =2;
    
    int m = Solve(arr,k);
    cout<<m;
}