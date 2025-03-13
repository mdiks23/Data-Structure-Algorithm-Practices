// Qs: Take a number from user and define is it even or odd using c++ code.

#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Please Enter The Number : "<<endl;
  cin >> num;
  if(num%2==0){
    cout << "The Number "<< num <<" is an Even number\n Thanks!"<<endl;
  }
  else{
        cout << "The Number "<< num <<" is an Odd number\n Thanks!"<<endl;
  }
}