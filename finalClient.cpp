//=========================================
// HW: CS 311 Final
// Name: Asma Ahmed
// File: member client file 
//=========================================

#include "htable.h"
#include <iostream>
using namespace std;

void searchForClient(htable client)
{
  int ID; //ID is the key
  int stop = 1; 
  
  while(stop != 0)//stop when 1
    {
      //look up person using ID
      //cout << the persons information if found else (blank element was returned)
      //send error message
      cout << "Enter the ID for the person you want to search: ";
      cin >> ID;
      el_t E = client.find(ID); //look for ID
      el_t blank; //
      
      if(E == blank)
	cout << ID << " not found" << endl;
      else
	cout << "Found " << ID << ": " << E << endl;
      cout << endl;
      cout << "Enter 0 to stop searching and end program" << endl;
      cout << "To continue searching enter 1: ";
      cin >> stop;
    }
  cout << endl;
  cout << "Ending program. Goodbye." << endl;
  
}
 
int main()
{
  htable client;
  ifstream fin;                                                           
  fin.open("data.txt"); //read file in                                        

  string a,b,c;
  long e;
  int d,f;

  while(fin >> a >> b >> c >> d >> e >> f)                           
    {                                                                   
      client.add(el_t(a,b,c,d,e,f)); //add elements into client table                 
    }      
  fin.close(); //close file

  client.displayTable(); //display table
  searchForClient(client); //go to function to look for certain person

  return 0;
}
