#include <iostream>
#include <cstring>
using namespace std; 





int main() {
  string temp = "Om gajoaj2 124042 1o4j104 1";
  string tem = "";
  
  int i = 0;
  while(i<=temp.length()){
    if(temp[i]>='0' && temp[i]<='9'){
      tem += temp[i];
    }
    i++;
  }
   cout << "Extracted digits: " << tem << endl;

}
