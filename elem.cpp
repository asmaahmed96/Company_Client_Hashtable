// CS311 Yoshii - el_t for HW8 Hash Table
// Element type of a list node is defined here
// el_t can be changed by the client to fit its needs
//----------------------------------------------------

#include "elem.h"

// blank element
el_t::el_t()
{
  firstName = " ";
  lastName = " ";
  email = " ";
  SSN = 1234;
  phoneNum = 1234567890;
  ID = 0;
}

// initializing constructor to create an el_t object 
el_t::el_t(string f, string l, string e, int s, long p, int r)
{
  firstName = f;
  lastName = l;
  email = e;
  SSN = s;
  phoneNum = p;
  ID = r;
}
  
// overload == for search based on the key part only
bool el_t::operator==(el_t OtherOne)
{
  if(firstName == OtherOne.firstName)
    return true;
  else if(lastName == OtherOne.lastName)
    return true;
  else if(email == OtherOne.email)
    return true;
  else if(SSN == OtherOne.SSN)
    return true;
  else if(phoneNum == OtherOne.phoneNum)
    return true;
  else if(ID == OtherOne.ID)
    return true;

  return false;
}

// overload != for search based on the key part only
bool el_t::operator!=(el_t OtherOne)
{
  if(firstName != OtherOne.firstName)
    return false;
  else if(lastName != OtherOne.lastName)
    return false;
  else if(email != OtherOne.email)
    return false;
  else if(SSN != OtherOne.SSN)
    return false;
  else if(phoneNum != OtherOne.phoneNum)
    return false;
  else if(ID != OtherOne.ID)
    return false;

  return true;
}

// overload cout 
ostream& operator<<(ostream& os, const el_t& E)  
{  
  os << E.firstName << "+";
  os << E.lastName << "+";
  os << E.email << "+"; 
  os << E.SSN << "+";
  os << E.phoneNum << "+";
  os << E.ID << " ";

  return os;  
}  
