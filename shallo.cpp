#include<iostream>
using namespace std;

class Car{
  public:
    string name;
    string color;
    int *mileage;

Car(string name , string color){
  this->name = name;
  this->color = color;
  mileage = new int;  // Dyanmic Allocation
  *mileage = 12;
  
}
Car(Car &original){
  cout<<"copying original to new..\n";
  name = original.name;
  color = original.color;
  mileage = original.mileage;// same memory addres copied
}
};
int main(){
  Car c1("maruti 800","white");

  Car c2(c1);
  cout<<c2.name<<endl;
  cout<<c2.color<<endl;
  cout<<*c2.mileage<<endl;
  *c2.mileage = 10;

  cout<<*c1.mileage<<endl;// Output : 10(shared memory)

  return 0;

}


// Shallow copy means creating a new object that copies only the top-level values of another object.
// If the object contains references (like arrays, lists, or other objects), both objects point to the same referenced data.