#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*have number be the limi for how many number the user can input, and also a number for the code to search for. If there is known then print -1.*/

int main() {
  //make variable
  int n;
  int a[n];
  int counter=0;
  //input
  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>a[i];
    if(a[i]==n){
      counter++;
    }
  }
  if(counter<1){
    cout<<"-1";
  }
  else{
    cout<<counter;
  } 
}