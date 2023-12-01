#include<iostream>
using namespace std;

int main(){
    int c ,r ;
    cout<<"Enter Number of rows: ";
    cin>>r;
    cout<<"Enter Number of columns: ";
    cin>>c;
    for(int i = 0; i<r;i++){
        for(int i = 0; i<c ; i++){
            cout<<"*";
        }
        printf("\n");
    } 
}