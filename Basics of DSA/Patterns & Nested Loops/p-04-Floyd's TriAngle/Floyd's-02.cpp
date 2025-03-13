#include <iostream>
using namespace std;
int main(){
  int n=5;
  char num='A';
  for(int i=0; i<n; i++){
  for(int j=1; j<=i+1; j++){
  cout<< num <<" ";
  num++;
  }
  cout<<endl;
  }
  return 0;
}