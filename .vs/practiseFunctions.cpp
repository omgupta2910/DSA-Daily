#include<iostream>
using namespace std;

int sum(int n){
    int ad = 0;
    for(int i=0;i<=n;i++){
        ad = ad + i;
    }
    cout<<ad;
}

int main(){
    int n;
    cin>>n;
    sum(n);

    
}