#include<iostream>
using namespace std;

int power(int a, int b){
      if(b==0)
        return 1;

      if(b==1)
        return a;

    int pow = power(a,b/2);

    if(b&1){
        return a*pow*pow;
    }
    else{
        return  pow*pow;
    }
    
}


int main(){
    int a, b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<answer;
}