/*
	
	Title			: Hotel Management System
	Language		: C++
	Author			: Daljeet Singh Chhabra
	Date Created	: 16-02-2016
	Last Modified	: 01-10-2018
*/

#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<stdlib.h>
using namespace std;
//MARK:- Interface Functions Here =>

void intro() 
{
	cout<<"\n\n\t            ";
	cout<<"     C++ Project On Hotel Management System";
	cout<<"\n\n\t\t\t\t     MADE BY";
	cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"||\t\t\t\t\t\t\t\t\t      ||";
	cout<<"||\t\t\t\t\t\t\t\t\t      ||";
	cout<<"||\t\t\t\tDaljeet Singh Chhabra\t\t\t      ||";
	cout<<"||\t\t\t\t\t\t\t\t\t      ||";
	cout<<"||\t\t\t\t\t  \t\t\t\t      ||";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
}

void head() {
	system("clear");
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"\t\t\t\t\t\t\t\t\t       \t";
	cout<<"\t\t\t\t   XYZ Group of Hotels\t\t\t       \t";
	cout<<"\t\t\t\t\t\t\t\t\t       \t";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
}
void time() {
	int i=0;
	long long j;
	cout<<"	\n\n\n	Connecting to Server\n 	Syncing DaTa";
	while(i<10)	{
		for (j=5;j>4;j++) {
			if (j==99999) {
				cout<<".";
				break;
			}
		}
		++i;
	}
}
//MARK:- Hotel Class Here =>
class hotel {
	private:
			int room_no;
			string name;
			string address;
			string phone;
			int days;
			float fare;
	public:
			void main_menu();		//to display the main menu
			void add();				//to book a room
			void display(); 		//to display the customer record
			void rooms();			//to display allotted rooms
			void edit();			//to edit the customer record
			int check(int);	     	//to check room status
			void modify(int);		//to modify the record
			void delete_rec(int);   //to delete the record
};
void hotel::main_menu() {
	int choice;
	while(choice!=5) {
		system("clear");
		head();
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t* MAIN MENU *";
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\n\n\t\t\t1.Book A Room";
		cout<<"\n\t\t\t2.Customer Record";
		cout<<"\n\t\t\t3.Rooms Allotted";
		cout<<"\n\t\t\t4.Edit Record";
		cout<<"\n\t\t\t5.Exit";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		switch(choice) {
			case 1:	add();
					break;
			case 2: display();
					break;
			case 3: rooms();
					break;
			case 4:	edit();
					break;
			case 5: break;
			default: {
				cout<<"\n\n\t\t\tWrong choice.....!!!";
				cout<<"\n\t\t\tPress any key to continue....!!";
				getchar();
			}
		}
	}
}
void hotel::add() {
	system("clear");
	head();
	int r,flag;
	ofstream fout("Record.dat",ios::app);
	cout<<"\n Enter Customer Details";
	cout<<"\n ----------------------";
	cout<<"\n\n Room no: ";
	cin>>r;
	flag=check(r);
	if(flag)
		cout<<"\n Sorry..!!!Room is already booked";
	else {
		room_no=r;
		cout<<" Name: ";
		getline(cin, name);
		cout<<" Address: ";
		getline(cin, address);
		cout<<" Phone No: ";
		getline(cin, phone);
		cout<<" No of Days to Checkout: ";
		cin>>days;
		fare=days*900;						//900 is currently set as the
											//default price per day
		fout.write((char*)this,sizeof(hotel));
		cout<<"\n Room is booked...!!!";
	}
	cout<<"\n Press any key to continue.....!!";
	getchar();
	fout.close();
}
void hotel::display() {
	system("clear");
	head();
	ifstream fin("Record.dat",ios::in);
	int r,flag;
	cout<<"\n Enter room no: ";
	cin>>r;
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			system("clear");
			head();
			cout<<"\n Customer Details";
			cout<<"\n ----------------";
			cout<<"\n\n Room no: "<<room_no;
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone no: "<<phone;
			cout<<"\n Days: "<<days;
			cout<<"\n Total Fare: "<<fare;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant....!!";
	cout<<"\n\n Press any key to continue....!!";
	getchar();
	fin.close();
}
void hotel::rooms() {
	system("clear");
	head();
	ifstream fin("Record.dat",ios::in);
	cout<<"\n\t\t\t    List Of Rooms Allotted";
	cout<<"\n\t\t\t    ----------------------";
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		cout<<"\n Room no: "<<room_no<<"\n Name: "<<name;
		cout<<"\n Address: "<<address<<"\n Phone: "<<phone;
		cout<<"\n Days: "<<days<<"\n Total: "<<fare;
		cout<<"\n**********************************";
	}
	cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
	getchar();
	fin.close();
}
void hotel::edit() {
	system("clear");
	head();
	int choice,r;
	cout<<"\n EDIT MENU";
	cout<<"\n ---------";
	cout<<"\n\n 1.Modify Customer Record";
	cout<<"\n 2.Delete Customer Record";
	cout<<"\n Enter your choice: ";
	cin>>choice;
	system("clear");
	head();
	cout<<"\n Enter room no: " ;
	cin>>r;
	switch(choice) {
		case 1:	modify(r);
				break;
		case 2:	delete_rec(r);
				break;
		default: cout<<"\n Wrong Choice.....!!";
	}
	cout<<"\n Press any key to continue....!!!";
	getchar();
}
int hotel::check(int r) {
	int flag=0;
	ifstream fin("Record.dat",ios::in);
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			flag=1;
			break;
		}
	}
	fin.close();
	return(flag);
}
void hotel::modify(int r) {
	system("clear");
	head();
	long pos,flag=0;
	fstream file("Record.dat",ios::in|ios::out|ios::binary);
	while(!file.eof()) {
		pos=file.tellg();
		file.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			cout<<"\n Enter New Details";
			cout<<"\n -----------------";
			cout<<"\n Name: ";
			getline(cin, name);
			cout<<" Address: ";
			getline(cin, address);
			cout<<" Phone no: ";
			getline(cin, phone);
			cout<<" Days: ";
			cin>>days;
			fare=days*900;
			file.seekg(pos);
			file.write((char*)this,sizeof(hotel));
			cout<<"\n Record is modified....!!";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant...!!";
	file.close();
}
void hotel::delete_rec(int r) {
	system("clear");
	head();
	int flag=0;
	char ch;
	ifstream fin("Record.dat",ios::in);
	ofstream fout("temp.dat",ios::out);
	while(!fin.eof()) {
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r) {
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone No: "<<phone;
			cout<<"\n Days: "<<days;
			cout<<"\n Total Fare: "<<fare;
			cout<<"\n\n Do you want to delete this record(y/n): ";
			cin>>ch;
			if(ch=='n')
				fout.write((char*)this,sizeof(hotel));
			flag=1;
			break;
		}
		else
			fout.write((char*)this,sizeof(hotel));
	}
	fin.close();
	fout.close();
	if(flag==0)
		cout<<"\n Sorry room no. not found or vacant...!!";
	else {
		remove("Record.dat");
		rename("temp.dat","Record.dat");
	}
}
//MARK:- Main() Function Here =>
int main() {
	hotel h;
	system("clear");
	cout<<"\n\n\n";
	intro();
	time();
	cout<<"\n\n\n\t\t\tPress any key to continue....!!";
	getchar();
	system("clear");
	head();
	char id[5],pass[7];
	cout<<"\n\n\t\t\t\tusername => ";
	cin>>id;
	cout<<"\n\t\t\t\tpassword => ";
	cin>>pass;
	cout<<"\n\n\t";
	time();
	cout<<"\t";
	if(strcmp(id,"admin")==0&&strcmp(pass,"******")==0)
		cout<<"\n\n\t\t\t  !!!Login Successfull!!!";
	else {
		cout<<"\n\n\t\t\t!!!INVALID CREDENTIALS!!!";
		getchar();
		exit(-1);
	}
	system("clear");
	h.main_menu();
	getchar();
	
	return 0;
} 