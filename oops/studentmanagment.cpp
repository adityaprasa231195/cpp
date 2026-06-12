#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

class Student {
  int rollNo;
  char name[50];
  char course[50];

public:
  void setData() {
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    cin.getline(name, 50);

    cout << "Enter Course: ";
    cin.getline(course, 50);
  }

  void showData() {
    cout << "Roll No: " << rollNo << "\n";
    cout << "Name: " << name << "\n";
    cout << "Course: " << course << "\n";
    cout << "-----------------------\n";
  }

  int getRollNo() { return rollNo; }
};

void addStudent() {
  Student s;
  ofstream file("students.dat", ios::app | ios::binary);

  cout << "\n--- Add New Student ---\n";
  s.setData();
  file.write((char *)&s, sizeof(s));
  file.close();

  cout << "Student added successfully!\n";
}

void displayAll() {
  Student s;
  ifstream file("students.dat", ios::in | ios::binary);

  if (!file) {
    cout << "No records found. Add students first.\n";
    return;
  }

  cout << "\n--- Student Records ---\n";
  bool hasRecords = false;
  while (file.read((char *)&s, sizeof(s))) {
    s.showData();
    hasRecords = true;
  }
  file.close();

  if (!hasRecords) {
    cout << "The database is empty.\n";
  }
}

void updateStudent() {
  int roll;
  bool found = false;

  cout << "\n--- Update Student ---\n";
  cout << "Enter Roll Number to update: ";
  cin >> roll;

  fstream file("students.dat", ios::in | ios::out | ios::binary);
  Student s;

  if (!file) {
    cout << "No records found.\n";
    return;
  }

  while (file.read((char *)&s, sizeof(s)) && !found) {
    if (s.getRollNo() == roll) {
      cout << "Enter new details:\n";
      s.setData();

      file.seekp(file.tellg() - static_cast<std::streamoff>(sizeof(s)));
      file.write((char *)&s, sizeof(s));
      found = true;
      cout << "Record updated successfully!\n";
    }
  }
  file.close();

  if (!found) {
    cout << "Record not found.\n";
  }
}

void deleteStudent() {
  int roll;
  bool found = false;

  cout << "\n--- Delete Student ---\n";
  cout << "Enter Roll Number to delete: ";
  cin >> roll;

  ifstream file("students.dat", ios::in | ios::binary);
  if (!file) {
    cout << "No records found.\n";
    return;
  }

  ofstream temp("temp.dat", ios::out | ios::binary);
  Student s;

  while (file.read((char *)&s, sizeof(s))) {
    if (s.getRollNo() != roll) {
      temp.write((char *)&s, sizeof(s));
    } else {
      found = true;
    }
  }

  file.close();
  temp.close();

  remove("students.dat");
  rename("temp.dat", "students.dat");

  if (found) {
    cout << "Record deleted successfully!\n";
  } else {
    cout << "Record not found.\n";
    remove("temp.dat");
  }
}

int main() {
  int choice;

  do {
    cout << "\n==============================\n";
    cout << "  STUDENT MANAGEMENT SYSTEM  \n";
    cout << "==============================\n";
    cout << "1. Add Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Update Student Record\n";
    cout << "4. Delete Student Record\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice) {
    case 1:
      addStudent();
      break;
    case 2:
      displayAll();
      break;
    case 3:
      updateStudent();
      break;
    case 4:
      deleteStudent();
      break;
    case 5:
      cout << "Exiting the program...\n";
      break;
    default:
      cout << "Invalid choice! Please try again.\n";
    }
  } while (choice != 5);

  return 0;
}
