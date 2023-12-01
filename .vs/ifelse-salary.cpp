#include<iostream>
using namespace std;

int main(){
    int savings;
    scanf("%d",savings);
    if (savings>5000){
        if(savings>10000){
            printf("Roadtrip with Neha");
        }
        else{
            printf("Shopping with Neha");    
        }
        
    }
    else if(savings>2000){
        printf("Rasmi");
    }
    else{
        printf("Friends");
    }
}