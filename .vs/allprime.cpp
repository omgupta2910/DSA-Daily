#include<iostream>
using namespace std;

int main() {
    int n , i ,N,check = 0;
    printf("Enter a number: ");
    scanf("%d",&N);
    for(n=2;n<=N;n++)
    { 
        for(i=2;i<=n/2;i++){
            if(n%i == 0)
            break;
        }
        if(i>n/2){
            check++; 
            printf("%d  ",n);
        }
    }
    printf("\nTotal prime numbers are: %d \n",check);
}