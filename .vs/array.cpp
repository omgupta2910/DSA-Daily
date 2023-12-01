#include<iostream>
#include<climits>
using namespace std;

int MaxVal(int arra[], int size){
   int maxi=INT_MIN;
   for(int i=0;i<size;i++){
      maxi = max(maxi,arra[i]);
   }
   return maxi;
}

int MinVal(int arra[], int size){
   int mini=INT_MAX;
   for(int i=0;i<size;i++){
      mini = min(mini,arra[i]);
   }
   return mini;
}


int main(){

   int arr[5]={1,2,3,4,5};
   cout<<arr[5];
   // int size;
   // cin>>size;
   // int arr[size];
   // for(int i = 0; i<size; i++){
   //    cin>>arr[i];
   // }

   // int max = MaxVal(arr,size);
   // cout<<"Largest Number is: "<<max<<endl;

   // int min = MinVal(arr,size);
   // cout<<"Smallest Number is: "<<min;

}