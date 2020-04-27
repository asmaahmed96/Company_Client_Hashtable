// CS311 Yoshii - el_t for HW8 Hash Table
// Element type of a list node is defined here
// el_t can be changed by the client to fit its needs
//-----------------------------------------------------

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class el_t
{
 private:
  string firstName;
  string lastName;
  string email;
  int SSN;
  long phoneNum;
  int ID;

 public:

  el_t();  // to create a blank el_t object
  el_t(string, string, string, int, long, int); // to create an initialized el_t object
  int getrank() {return ID;}; // returns ID
  bool operator==(el_t);  // overload == for search
  bool operator!=(el_t);  // overload != for search
  // In search == is used to compare node elements
  // but what does it mean for this client to compare
  // node elements?  

  // this overloads cout for the el_t object
  // This is a friend function since the receiver object is not el_t
  friend ostream& operator<<(ostream&, const el_t&);  
  
  friend class htable;  // client of this class is htable which needs access to the key part of el_t 

};

