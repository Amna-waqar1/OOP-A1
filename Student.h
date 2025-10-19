#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	//Encapsulation
	string name;
	int age;
	int rollNo;
	double gpa;
public:
	//Parameterized constructor
	Student(string n, int a, int r, double g=0.0) {
		name = n;
		age = a;
		rollNo = r;
		gpa = g;
	}
	//default constructor
	Student() {
		name = "Amna";
		age = 20;
		rollNo = 48;
		gpa = 3.29;

	}
	//destructor
	~Student(){
		cout << "Information is destructed for "<<name <<endl;

	//print for each obj separately
	}

	//separating interface and implementation 

	//function decalaration
	void setDetails(string n, int a, int r, double g);
	void getDetails();
	void showDetails();

	//grade calculation
	char calculateGpa(double gpa);

};
