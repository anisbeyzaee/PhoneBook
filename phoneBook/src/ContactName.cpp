/*
 * ContactName.cpp
 *
 *  Created on: Oct 5, 2017
 *      Author: Anis
 */

#include <iostream>
#include <string>
using namespace std;
#include "ContactName.h"
int isAvailable;
   ContactName::ContactName(){
   newPhoneNumber = 0  ;
   isAvailable = true;
}
 ContactName::ContactName(string name, int phoneNumber){
	//Overload Constructor
	newName = name;
	newPhoneNumber = phoneNumber;

}
ContactName:: ~ContactName(){

}
string ContactName :: getName()   {    //getter definition
	return newName;

}

int ContactName :: getPhoneNumber(){
	return newPhoneNumber;

}
void ContactName:: setName(string a){
	newName = a;
}

void ContactName :: setPhoneNumber(int c){

}

void ContactName::SetAvailable(bool availability)
{
	isAvailable = availability;
}
