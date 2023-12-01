#include<iostream>
#include<climits>
using namespace std;

bool search(int arra[],int size, int key){
     for(int i=0;i<size;i++){
        if(arra[i]==key){
            return 1;
        }
     }
     return 0;
}
int main(){
   int arr[5] = {1,2,3,4,5};
   int key;
   cout<<"Enter KEY: ";
 
  cin>>key;
  bool found = search(arr,5,key);

  if (found){
   cout<<key<<"KEY is present";
   }
  else
  cout<<"KEY is not presenet";

} 
