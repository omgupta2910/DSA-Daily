#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n ;i++){
        for(int j = 1 ; j<=(6-i);j++){
            cout<<j;
        }
        cout<<endl; 
    }
}

