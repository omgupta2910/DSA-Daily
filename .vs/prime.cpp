#include<iostream>
using namespace std;

int main()
{
    int n , check = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i<=n ; i++)
     {
        if(n%i == 0 ){
            check++;
        } 
    }
    if (check == 2 ){
        printf(" %d is prime number", n);
    }
    else{
        printf("%d is not a prime numebr",n);
    }

    
 }

// #include<iostream>
// using namespace std;

// int main() {
//     int n , i ;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     for(i=2;i<=n/2;i++){
//         if(n%i == 0)
//         break;
//     }
//     if(i>n/2)
//         printf("%d is a prime number",n);
//     else
//         printf("%d is not a prime number",n);
//     printf("\n%d",i);
   
// }