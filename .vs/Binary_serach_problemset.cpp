#include<iostream>
using namespace std;

    int First(int arr[], int n, int key){
        int s = 0;
        int end = n-1;
        int mid = s +(end-s)/2;
        int ans = -1;

        while(s<=end){
            if(arr[mid]==key){
                ans = mid;
                end = mid-1;
            }
            else if(key>arr[mid]){
                s = mid+1;
            }
            else if(key<arr[mid]){
                end = mid-1;
            }
            mid = s + (end-s)/2;
        }
        return ans;
    }

    int Last(int arr[], int n, int key){
        int s = 0;
        int end = n-1;
        int mid = s +(end-s)/2;
        int ans = -1;

        while(s<=end){
            if(arr[mid]==key){
                ans = mid;
                s = mid+1;
            }
            else if(key>arr[mid]){
                s = mid+1;
            }
            else if(key<arr[mid]){
                end = mid-1; 
            }
            mid = s + (end-s)/2;
        }
        return ans;
    }
    


int main(){
    int array[5] = {1,2,3,3,5};
    int first = First(array,5,3);
    int last = Last(array,5,3);

    cout<<"The first index of the key is: "<<first<<endl;
    cout<<"The last index of the key is: "<<last<<endl;
}