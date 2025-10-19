#include"Student.h"

//function definition using scope resolution 
void Student::setDetails(string n,int a,int r,double g) {

}

//function taking input from user for s1
void Student:: getDetails() {
    cout << "Name : ";
        cin>>name;
        cout << "Age : ";
        cin >> age;
        cout << "Roll No : ";
        cin >> rollNo;
        cout << "Gpa : ";
        cin >> gpa;

}

//display function 
void Student::showDetails() {
   
    cout << "Name : " << name;
    cout << "| Age : " << age;
    cout << "| Roll No : " << rollNo;
    cout << "| Gpa : " << gpa;
    cout << "| Grade : " << calculateGpa(gpa) << endl;
}  

//Grades calculation 
char Student:: calculateGpa(double gpa) {
    if (gpa >= 3.7) return'A';
    else if (gpa >= 3.0) return'B';
    else if (gpa >= 2.0) return 'C';
    else return 'F';
   
}