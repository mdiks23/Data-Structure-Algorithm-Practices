// Qs: Take the age of user. Then justify is he/she permittable to get a driving licence using c++ code.
#include <iostream>
using namespace std;
int main () {
  int age;
  cout << "Please Enter Your Current Age : " <<endl;
  cin >> age;
  if(age>=18){
        cout <<"Congratulations! \nYou are eligible to get your driving licence. "<< endl;
  }
  else{
        cout <<"Sorry! \nYou are not eligible to get your driving licence now. "<< endl;
  }
  
  return 0;
}