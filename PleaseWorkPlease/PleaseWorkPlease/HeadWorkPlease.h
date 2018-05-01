#pragma once
#include<conio.h>
#include<iostream>
#include<string>

using namespace std;


class PleaseWorkPlease {
private:



	struct Student
	{
		char name[30];
		char degree[30];
		int idNumber;
		int graduatingYear;
		char letterGrade;
		Student *next;
	};
	struct node
	{
		node *prev;
		Student data;
		node *next;

	}*head, *lastptr;
public:
	bool check = true;
	PleaseWorkPlease();
	void dataEntry(int count);
	void search(); 
	void menu();
	void del();
};