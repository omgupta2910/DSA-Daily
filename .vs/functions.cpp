#include<iostream>
using namespace std;
 
void print(int num){
    cout<<num<<endl;
}

void sum(int num1,int num2){
    int sum = num1+num2;
    cout<<sum;
}
 
 int main(){
    int a,b;
    cout<<"Enter num 1 and num 2: ";
    cin>>a>>b;
    sum(a,b);

 }
