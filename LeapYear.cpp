// Practice Ground 
//__________________

//  ## n Factorial 
//_________________

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
       
  int year;

    cout<<"Is this Leap Year? Input the year : ";
    cin>>year;

    if (year%400==0){
        cout<<"This is Leap Year"<<endl;
        return 0;
    }
    else if (year%4==0 && year%100!=0){
        cout<<"this is also leap year"<<endl;
    }
   else {
    cout<<"this is not leap year "<<endl;
   }
  

    return 0;
}