#include <iostream>
#include <string>
using namespace std;



int main() {
  
  string firstName;
  string middleName;
  string lastName;

 cout << "Please enter your full name: ";
 
 cin >> firstName;
 cin >> middleName;
 cin >> lastName; 


 cout << "Your initials are: " << firstName.front() << "." << middleName.front() << "." << lastName[0] << "." << endl;
 
}