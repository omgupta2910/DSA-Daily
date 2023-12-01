#include<iostream>
using namespace std;

int main()
{
    int a , b ,c, x ;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b){
        // printf("%d",a);
        if(a>c){
             x=a;
        }
        else{
            x=c;
        }
    } 
      else{
        // printf("%d", b);
        if(b>c)
        {
           x=b;
        }
        else{
           x=c;
        }
      }
      printf(" \n Largest Numebr is: ");
      printf("%d",x);
}