#include<bits/stdc++.h>
using namespace std;
// Creating Class and Object
class student{
// Properties
  int roolNo = 2330155;
  float cgpa = 7.95;
  string name = "MukulAnand";
// Methods
  void getperctage(){
    cout<<(cgpa*10)<<"%"<<endl;
  }

};
int main(){
student s1; // Object
cout<< sizeof(s1);
}