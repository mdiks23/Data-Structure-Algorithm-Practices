#include <iostream>
using namespace std;
int main(){
  int money;
  float roi;
  float year;
  cout<<"Enter The Amount Of Money : "<<endl;
  cin>>money;
  cout<<"Enter The Rate Of Interest : "<<endl;
  cin>>roi;
  cout<<"Enter The Time Period in Years : "<<endl;
  cin>>year;
 float interest= (money*year*roi)/(double)100;
  cout<<"Your Net Interest Amount Is : "<< interest <<endl;
}