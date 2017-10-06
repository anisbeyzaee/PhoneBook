/*
 * ContactName.h
 *
 *  Created on: Oct 5, 2017
 *      Author: Anis
 */

#ifndef CONTACTNAME_H_
#define CONTACTNAME_H_

#include <iostream>
#include <string>
using namespace std;



class ContactName{
  public:
	ContactName();  //Default Constructor
	ContactName(string, string, int);    //Overload Constructor

   ~ContactName();   //Destructor
 // getter
   string getName();
   string getLastName();
   int getPhoneNumber();
    void setName(string);
    void setLastName(string);
    void setPhoneNumber(int);





private:
    // new variables
	string newName;
	string newLastName;
	int newPhoneNumber;

};

#endif /* CONTACTNAME_H_ */
