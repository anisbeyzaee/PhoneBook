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

   ContactName::ContactName(){
   newPhoneNumber = 0  ;

}
 ContactName::ContactName(string name, string lastName, int phoneNumber){
	//Overload Constructor
	newName = name;
	newLastName = lastName;
	newPhoneNumber = phoneNumber;
}
ContactName:: ~ContactName(){

}
string ContactName :: getName()   {    //getter definition
	return newName;

}

string ContactName :: getLastName(){
	 return newLastName;
}
int ContactName :: getPhoneNumber(){
	return newPhoneNumber;

}
void ContactName:: setName(string a){
	newName = a;
}
void ContactName :: setLastName(string b){
	newLastName = b;
}
void ContactName :: setPhoneNumber(int c){

}
