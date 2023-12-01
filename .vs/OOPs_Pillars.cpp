#include<iostream>
using namespace std;


class Human{
    public:
    int height;
    int weight;
    int age;
    
    public:

    int say(int x, int y = 0){
        cout<<"Say Hello";
    }

    int say(int w, int m = 2){
        return w;
    }

};

int main(){
    Human obj;
    cout<<"Working";
}