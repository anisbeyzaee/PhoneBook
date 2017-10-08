/*
 * operator.h
 *
 *  Created on: Oct 6, 2017
 *      Author: Anis
 */

#ifndef OPERATOR_H_
#define OPERATOR_H_

#include <iostream>
#include <string>
#include "ContactName.h"
using namespace std;

class Operator{
public:
	Operator(ContactName[]);
	void DeleteContact(string name, int index);
	void AddContact(string name, int phoneNumber, int index);
	int SearchContact(string name);
private:
	ContactName *phoneList;
};


#endif /* OPERATOR_H_ */
