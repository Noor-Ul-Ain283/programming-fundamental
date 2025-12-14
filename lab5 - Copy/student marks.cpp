#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if(marks >= 90)
      {
		  cout << "Grade: A+";}
    if(marks >= 80 && marks < 90)
       {
		 cout << "Grade: A";}
    if(marks >= 70 && marks <= 79)
       {
		 cout << "Grade: B";}
    if(marks >= 60 && marks <= 69)
       {
		cout << "Grade: C";}
    if(marks < 60)
       {
		cout << "Fail";}
    return 0;
}

