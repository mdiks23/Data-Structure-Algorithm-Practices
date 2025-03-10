// Qs: Take two numbers from user. Then find out which one is the minimum using c++ code.
#include <iostream>
using namespace std;
int main () {
  int a;
  cout << "Enter the first number : " <<endl;
  cin >> a;
  int b;
  cout << "Enter the second number : " <<endl;
  cin >> b;
  if(a<b){
        cout <<"The minimum number is : "<< a << endl;
  }
  else{
        cout <<"The minimum number is : "<< b << endl;
  }
  
  return 0;
}