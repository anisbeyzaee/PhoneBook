//============================================================================
// Name        : phoneBook.cpp
// Author      : Anis B.
//============================================================================

#include <iostream>
using namespace std;
#include "ContactName.h"
#include<fstream>

string name;
int phoneNumber;
string header="A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):   ";
string choice;
string input;
ContactName phoneList[100];

int index=0;
void add(){

}
void search(){

}
void del(){

}
void list(){

}

int main() {
	ofstream infile;
	ofstream outfile("book2.tex");
	//int i=0;
	ifstream file;
	file.open("book.txt");

	while(file>> name>>phoneNumber){

		phoneList[index++]=ContactName (name, phoneNumber);


	}


	cout<<header<< endl;
	cin>>choice;

	if (choice=="A"){
		cout<<"Enter a Name: "<<endl;
		cin>>name;
		cout<<"Enter Phone Number: "<<endl;
		cin>>phoneNumber;
		phoneList[index]=ContactName (name, phoneNumber);


	}if (choice=="S"){


	}if (choice=="D"){

	}if (choice=="L"){

	}if (choice=="Q"){

	}else {
		cout<<"Wrong Entry,"<<endl;
		index++;
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

