//Qs: Take a number from user and then provide the sum of total and the sum of even and odd numbers.
#include <iostream>
using namespace std;
int main() {
  int odd =0;
  int even =0;
  int total =0;
  int n;
  cout<<"Please Enter A Number : "<<endl;
  cin>>n;
  for(int i=1; i<=n; i++){
    if(i%2!=0){
      even+=i;
    }else{
      odd+=i;
    }
    total+=i;
  }
  cout<<"The Sum Of Odd Numbers is : "<<odd<<endl;
  cout<<"The Sum Of Even Numbers is : "<<even<<endl;
  cout<<"The Sum Of The Numbers is : "<<total<<endl;
  return 0;
}
