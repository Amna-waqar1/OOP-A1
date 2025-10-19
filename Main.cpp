#include"Student.h"

//main function
int main() {
	cout << "          Student Information System           " << endl;

	//object s1 have user defined details
	Student s1;
	Student s2("Aryan", 19, 35, 3.57);

	//s3 uses default details
	Student s3;
	s1.getDetails();
	s1.showDetails();
	s2.showDetails();
	s3.showDetails();
	return 0;
}