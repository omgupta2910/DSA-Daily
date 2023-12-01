#include<iostream>
#include<string>
using namespace std;


bool isPresent(int arr[3][4], int target, int n, int m){
    for(int i = 0;i<n;i++){
        for(int j = 0 ;j < m ; j++){
            if(arr[i][j] == target){
                return 1;
            } 
        }
    }
    return 0;
}

void sum (int arr[3][4], int n ,int m){
     
    int temp = 0;
    
    for(int i = 0;i<n;i++){
        for(int j = 0 ; j<m; j++){   
            temp+=arr[i][j];
        }
        cout<<i<<":"<<temp<<endl;
        temp = 0;
    }
    cout<<endl;
}

int main(){

   string s = 'abcdef';
   s.remove(s[1],s[3]);
   cout<<s;
}
