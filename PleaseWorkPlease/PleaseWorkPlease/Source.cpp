#include "HeadWorkPlease.h"

PleaseWorkPlease::PleaseWorkPlease(){

}

void PleaseWorkPlease::dataEntry(int count)
{
	if (count == 0) {
		node *p;
		p = new node;
		cout << "Please enter the name of the student:" << endl;
		gets_s(p->data.name);
		cout << "Please enter the student's degree:" << endl;
		gets_s(p->data.degree);
		cout << "Please enter the student's ID number: " << endl;
		cin >> p->data.idNumber;
		cout << "Please enter the student's graduating year: " << endl;
		cin >> p->data.graduatingYear;
		cout << "Please enter the student's letter grade: " << endl;
		cin >> p->data.letterGrade;
		p->next = NULL;


		if (check)
		{
			head = p;
			lastptr = p;
			check = false;
		}
		else
		{
			lastptr->next = p;
			lastptr = p;
		}

		cout << endl << "Student's Data Filed Successfully";
		cout << endl << "Please Press Any Key To Return To Menu";
		_getch();
	}
	else {
		node *p;
		p = new node;
		cout << "Please enter the name of the student: " << endl;
		gets_s(p->data.name);
		gets_s(p->data.name);
		cout << "Please enter the student's degree: " << endl;
		gets_s(p->data.degree);
		cout << "Please enter the student's ID number: " << endl;
		cin >> p->data.idNumber;
		cout << "Please enter the student's graduating year: " << endl;
		cin >> p->data.graduatingYear;
		cout << "Please enter the student's letter grade: " << endl;
		cin >> p->data.letterGrade;
		p->next = NULL;



		if (check)
		{
			head = p;
			lastptr = p;
			check = false;
		}
		else
		{
			lastptr->next = p;
			lastptr = p;
		}

		cout << endl << "Student's Data Filed Successfully";
		cout << endl << "Please Press Any Key To Return To Menu";
		_getch();

	}

}

void PleaseWorkPlease::search()
{
	node *prev = NULL;
	node *current = NULL;
	int idNumSearch;
	cout << "Please enter ID number to search: ";
	cin >> idNumSearch;
	if (head == 0)
	{
		cout << " Cannot delete from an empty list" << endl;
	}
	else
	{
		prev = head;
		current = head;
		while (current != 0)
		{
			if (current->data.idNumber == idNumSearch)
			{
				break;
			}
			else
			{
				prev = current;
				current = current->next;
			}
		}

		if (current == 0)
		{
			cout << "Student ID number not found" << endl;
		}
		else
		{
			cout << "Students Name: ";
			cout << current->data.name << endl;
			cout << "ID Number: ";
			cout << current->data.idNumber << endl;
			cout << "Degree: ";
			cout << current->data.degree << endl;
			cout << "Graduating Year: ";
			cout << current->data.graduatingYear << endl;
			cout << "Letter Grade: ";
			cout << current->data.letterGrade << endl;
		}
	}
	cout << endl << "Please Press Any Key To Return To Menu";
	_getch();
}
void PleaseWorkPlease::del()
{
	int idNumDelete;
	cout << "Please enter ID number to delete: ";
	cin >> idNumDelete;

	if (head == 0)
	{
		cout << " Cannot delete from an empty list" << endl;
	}
	else
	{
		node *curr = head;
		node *trail = 0;

		while (curr != 0) // search through linked list
		{
			if (curr->data.idNumber == idNumDelete)
			{
				break;
			}
			else
			{
				trail = curr;
				curr = curr->next;
			}
		}
		// node with id num not found
		if (curr == 0)
		{
			cout << "ID number " << idNumDelete << " not found" << endl;


		}
		else
		{
			//delete from head
			if (head == curr)
			{
				head = head->next;
			}

			else
			{
				trail->next = curr->next;
			}

			delete curr;
			cout << endl << "Student Data Deleted";

		}


	}

	cout << endl << "Please Press Any Key To Return To Menu";
	_getch();


}

void PleaseWorkPlease::menu()
{

	char choice;
	int count = 0;
	do
	{
		system("cls");
		cout << "1) Press 1 to enter New Student:" << endl;
		cout << "2) Press 2 to search for a Student Record:" << endl;
		cout << "3) Press 3 to Delete a Student Record:" << endl;
		cout << "4) Press 4 to Exit the Program:" << endl;
		choice = _getch();
		if (choice == '1')
		{
			system("cls");
			dataEntry(count);
			count += 1;

		}
		else if (choice == '2')
		{
			system("cls");
			search();
		}
		else if (choice == '3')
		{
			system("cls");
			del();
		}
		else if (choice == '4')
		{
			system("cls");
			exit(0);
		}
		else
		{
		}
	} while (choice != 5);
	_getch();
}

