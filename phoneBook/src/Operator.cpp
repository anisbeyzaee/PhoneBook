/*
 * operator.cpp
 *
 *  Created on: Oct 6, 2017
 *      Author: Anis
 */

#include <iostream>
#include <string>
using namespace std;
#include "Operator.h"

ContactName *phoneList;

Operator::Operator(ContactName *contactNames)
{
	phoneList = contactNames;
}

void Operator::AddContact(string name, int phoneNumber, int index)
{
	phoneList[index].setName(name);
	phoneList[index].setPhoneNumber(phoneNumber);
	phoneList[index].SetAvailable(false);
}

void Operator::DeleteContact(string name, int index)
{
	phoneList[index].SetAvailable(true);
}

int Operator::SearchContact(string name)
{
	int i = 0;
	while(i < 100 && phoneList[i])
	{
		if (phoneList[i].IsAvailable() && phoneList[i].getName() == name)
		{
			return phoneList[i].getPhoneNumber();
		}

		i++;
	}

	return -1;
}
