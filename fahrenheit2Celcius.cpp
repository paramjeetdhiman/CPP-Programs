#include<bits/stdc++.h>
using namespace std;

int main(){
/**
 * cel = (5/9) * (fah-32)
 */

 float fah{}, cel{};
 
 cout<<"Enter the temperature in fahrenheit: ";
 cin>>fah;

 cel =  (5/9.0) * (fah-32); //implicit typecasting => float * int = float

 cout<<cel<<endl;

  return 0;
}
