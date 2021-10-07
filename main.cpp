#include <iostream>
#include <string>
using namespace std;

struct car{
string make;
string model;
int year;
string color;
};
void displayCarColor(int year){
  car ptr;
  if(year>2010){
    ptr.color="Green";
    cout<<"The color of the car is : "<<ptr.color<<endl;
  }
  else {
    ptr.color="Red";
    cout<<"The color of the car is : "<<ptr.color<<endl;
  }
}
int main() {
  car *ptr1, *ptr2, *ptr3;
  car car1 = {"Nissan", "Altima", 2013};
  car car2 = {"Toyota", "Camery", 2005};
  car car3 = {"Ford", "F150", 2015};
  ptr1= &car1;
  new(ptr1) car;
  ptr2= &car2;
  new(ptr2) car;
  ptr3= &car3;
  new(ptr3) car;
displayCarColor(ptr1->year);
displayCarColor(ptr2->year);
displayCarColor(ptr3->year); 
}