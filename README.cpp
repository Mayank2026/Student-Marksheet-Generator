//  # Student-Marksheet-Generator
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks[5];
};

void inputStudentDetails(Student& student) {
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    cin >> student.rollNumber;

    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> student.marks[i];
    }
}

void printStudentMarksheet(const Student& student) {
    cout << "\n************* Marksheet *************\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "-------------------------------------\n";
    cout << "Subject\t\tMarks\n";
    cout << "-------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ":\t" << student.marks[i] << endl;
    }
    cout << "-------------------------------------\n";
}

int main() {
    Student student;

    inputStudentDetails(student);
    cin.ignore(); // Clear the newline character from the input buffer
    cout << endl;

    printStudentMarksheet(student);

    return 0;
}
