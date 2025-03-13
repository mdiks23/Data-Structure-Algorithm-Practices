#include <iostream>
using namespace std;
int main(){
  int n=5;
  for(char i='A'; i<'A'+n; i++){
  for(int j=0; j<i-'A'; j++){
  cout << " " ;}
  
  for(int j=0; j<n-(i-'A'); j++){
  cout<< i ;
  }
  cout<<endl;
  }
  return 0;
}