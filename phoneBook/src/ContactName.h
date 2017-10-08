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
	ContactName(string, int);    //Overload Constructor


   ~ContactName();   //Destructor
 // getter
   string getName();

   int getPhoneNumber();
    void setName(string);

    void setPhoneNumber(int);
    bool IsAvailable();
    void SetAvailable(bool availability);




private:
    // new variables
	string newName;
	int newPhoneNumber;

};

#endif /* CONTACTNAME_H_ */
