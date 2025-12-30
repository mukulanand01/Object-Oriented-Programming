#include<iostream>
#include<string>
using namespace std;
class student {
  private:
  string name;
  float cgpa;
 public:
 void getPercentage(){
  cout<<(cgpa*10)<<"%"<<endl;
 }
 // Setters 
 void setName(string nameVal){
  name = nameVal;
 }
 void setCgpa(float cgpaVal){
  cgpa = cgpaVal;
 }
  // Getters
 string getName(){
  return name;
 }
 float getCgpa(){
  return cgpa;
 }
};
int main(){
  student s1;
  s1.setName("Anand");
  s1.setCgpa(7.95);
  cout<<s1.getName()<<endl;
  cout<<s1.getCgpa()<<endl;
}