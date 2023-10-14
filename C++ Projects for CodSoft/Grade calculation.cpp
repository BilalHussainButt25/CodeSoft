#include <iostream>
#include <vector>
#include<cstdint>
#include <climits>
using namespace std;

struct Student {
  string name;
  int grade;
};

int main() {
  
  int totalGrade = 0;
  int highestGrade = INT_MIN;
  int lowestGrade = INT_MAX;

  
  vector<Student> students;

  
  int numStudents;
  cout << "Enter the number of students: ";
  cin >> numStudents;

  for (int i = 0; i < numStudents; i++) {
    Student student;
    cout << "Enter student name: ";
    cin >> student.name;
    cout << "Enter student grade: ";
    cin >> student.grade;

    
    totalGrade += student.grade;
    highestGrade = max(highestGrade, student.grade);
    lowestGrade = min(lowestGrade, student.grade);

    students.push_back(student);
  }

  
  double averageGrade = static_cast<double>(totalGrade) / students.size();

  
  cout << "Average grade: " << averageGrade << endl;
  cout << "Highest grade: " << highestGrade << endl;
  cout << "Lowest grade: " << lowestGrade << endl;

  return 0;
}

