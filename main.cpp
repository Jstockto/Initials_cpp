#include <iostream>
#include <string>
using namespace std;

// cout << "Please insert your full name: ";
 // should we do "please insert your first name" then "middle" then "last" even though the prompt is different?
 // i think we could do that at first but i'm not sure if there might be another way to do it. yeahh we can see if it does the basic stuff right.
 // yeah we can just try it to check our code
 // char fullname;
 // cin >> fullname;
 //cout << "Please enter your middle name: ";
 //char middlename;
 //cin >> middlename;

 //cout << "Please enter your last name: ";
 //char lastname;
 //cin >> lastname;

int main() {
  
  string firstName;
  string middleName;
  string lastName;

 cout << "Please enter your full name: ";
 
 cin >> firstName;


 cin >> middleName;


 cin >> lastName; 

 
//bro why was that so easy im gonna cry

 cout << "Your initials are: " << firstName.front() << "." << middleName.front() << "." << lastName[0] << "." << endl;
 // maybe once we finish this it should be able to display any number of initials if you don't have the 3 standard and create variables if needed.
 
}