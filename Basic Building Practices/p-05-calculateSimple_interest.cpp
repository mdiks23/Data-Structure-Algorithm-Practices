#include <iostream>
using namespace std;
int main(){
  int money;
  int roi;
  int year;
  cout<<"Enter The Amount Of Money : "<<endl;
  cin>>money;
  cout<<"Enter The Rate Of Interest : "<<endl;
  cin>>roi;
  cout<<"Enter The Time Period in Years : "<<endl;
  cin>>year;
  int interest= (money*year*roi)/100;
  cout<<"Your Net Interest Amount Is : "<< interest <<endl;
}