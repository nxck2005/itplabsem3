#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    float academicScore;
public:
    void setStudentInfo() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter academic score: ";
        cin >> academicScore;
        cin.ignore();  // Clear input buffer
    }
    
    void displayStudentInfo() {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Academic Score: " << academicScore << endl;
    }
};

class Sports {
protected:
    float sportsScore;
public:
    void setSportsScore() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
    
    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Student, public Sports {
private:
    float totalScore;
public:
    void calculateTotal() {
        totalScore = academicScore + sportsScore;
    }
    
    void displayResult() {
        displayStudentInfo();
        displaySportsScore();
        cout << "Total Score: " << totalScore << endl;
    }
};

int main() {
    Result studentResult;
    
    cout << "Enter Student Details:\n";
    studentResult.setStudentInfo();
    studentResult.setSportsScore();
    studentResult.calculateTotal();
    
    cout << "\nStudent Result:";
    studentResult.displayResult();
    
    return 0;
}