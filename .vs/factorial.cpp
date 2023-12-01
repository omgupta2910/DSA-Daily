#include<iostream>
using namespace std;

int factorial(int n){
    long fact =1;
    for(int i = 2;i<=n;i++){
        fact = fact*i;
    }
    // return fact;
    cout<<fact;
}

int main(){
    long n;
    cin>>n;
    factorial(n);
    // int ans = factorial(n); 
    // cout<<ans;
   
}