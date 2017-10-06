//============================================================================
// Name        : phoneBook.cpp
// Author      : Anis B.
//============================================================================

#include <iostream>
using namespace std;
#include "ContactName.h"

string name;
string lastName;
int phoneNumber;
string header="A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit): S";
string choice;
string input;


void add(){

}
void search(){

}
void del(){

}
void list(){

}

int main() {



	cout<<header<< endl;
	cin>>choice;

	if (choice=="A"){
		cout<<"Enter a Name: "<<endl;
		cin>>name;
		cout<<"Enter Phone Number: "<<endl;
		cin>>phoneNumber;
		ContactName n1 (name,name, phoneNumber);


	}if (choice=="S"){


	}if (choice=="D"){

	}if (choice=="L"){

	}if (choice=="Q"){

	}else {
		cout<<"Wrong Entry,"<<endl;

	}


	return 0;
}

void add(ContactName){


}
void search(ContactName){

}
void del(ContactName){

}
void list(ContactName){

}

