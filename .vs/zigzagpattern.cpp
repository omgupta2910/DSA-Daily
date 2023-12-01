#include<iostream>
using namespace std;

int main(){
    int n =9;
    for(int i = 1; i<=3 ; i++){
        for(int j = 1; j<=n;j++){
            ((j+i)%4==0 || i ==2 && j%4==0 )? cout<<"*" : cout<<" ";
        }
         cout<<endl;
    }
   
}   