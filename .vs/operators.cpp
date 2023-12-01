#include<iostream>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n%2 == 0 && n%3 == 0) {
        printf("Divisible by both 2 & 3");
    }    
    else if(n%2 == 0 ){
        printf("Divisible by 2 only");
    }else if(n%3 == 0){
        printf("Divisible by 3 only");
    }
    else{
        printf("Neither divisible by 2 nor 3");
    }
}
