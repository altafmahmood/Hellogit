/* Author 		: Altaf Mahmood
 * Date			: 17 November 2015
 * Time			: 20:38
 * Description	: Program to display Employee Details and print as required by user.
*/
#include <iostream>
 using namespace std;

class Employee{
private:
	int empId;
	char name[20];
	float salary;

public:
	int getEmployee(){
		cout << "Enter the Employee ID : ";
		cin >> empId;
		cout << "Enter the Name : ";
		cin >> name;
		cout << "Enter the Salary : ";
		cin >> salary;
		return 0;
	}

	int display(){
		cout << "The Employee ID is : " << empId << endl;
		cout << "The name of the Employee is : " << name << endl;
		cout << "The Salary is : " << salary << endl;
		return 0;
	}

	int displayInc(){
		int incr;
		incr = salary * 1.2;
		cout << "The Increment of 20% amounts to : " << incr <<endl;
		return 0;
	}

	int searchEmp(int eI){
		if(eI==empId){
			cout << "For Employee ID : " << eI << endl;
			cout << "Name is : " << name << endl;
			cout << "Salary is : " << salary <<endl;
			return 0;	
		}
		else
			return 1;

	}
};

int main(){
	Employee e[10];
	int i, choice, count, num, empid;
	count = 0;
	while(1){
		cout << "choice: \n1. Enter Employee details \n2.Display all Employee details \n3. Search for Employee details \n4. Display all the Employee Increment \n5. Search for an Employee Increment \n6. Exit";
		cout << "Enter the choice : ";
		cin >> choice;
		switch(choice){
			case 1:
			cout << "Enter the no of Employee details to be added : ";
			cin >> num;
			for(i=count; i<num; i++){
				if(count==9)
					cout << "Maximum size of Array Reached \n";
				else{
					e[count].getEmployee();
					count++;
				}
			}
			break;

			case 2:
			for(i=0; i<count; i++){
				e[i].display();
			}
			break;

			case 3:
			cout << "Enter the Employee to be searched : ";
			cin >> empid;
			for(i=0; i<count; i++){
				e[i].searchEmp(empid);
			}
			break;

			case 4:
			for(i=0; i<count; i++){
				e[i].displayInc();
			}
			break;

			case 5:
			break;

			case 6:
			exit;
			break;
		}
	}
}
