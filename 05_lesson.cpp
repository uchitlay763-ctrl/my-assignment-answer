#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;

public:
    // Constructor
    Student(string n, string cls, int roll, float m) {
        name = n;
        className = cls;
        rollNumber = roll;
        marks = m;
    }

    // Function to calculate grade
    char calculateGrade() {
        if (marks >= 90) {
        	return 'A';
        	}
        else if (marks >= 80){
        	 return 'B';
        	 }
        else if (marks >= 70){
        	 return 'C';
        	 }
        else if (marks >= 50){
        	 return 'D';
        	 }


    }


    void displayInfo() {
        cout << "......Student Information......" << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {

    Student student1("Aung Aung", "10A", 101, 95.5);
    Student student2("Su Su", "10B", 102, 72.3);
    Student student3("Min Min", "10C", 103, 55.0);

    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();

    return 0;
}
