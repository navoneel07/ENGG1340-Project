/*
Header file for each of the student data items. Contains class defintion along with
member functions such as Add etc.
*/

#pragma once
#include <string>
#include <unordered_map>
#include <array>
using namespace std;

class Student{
    string uid;           //10-digit UID
    string name;                //Name of student
    string year;                   //Year of study
    string faculty;             //Faculty of study
    string curriculum;          //Curriculum of study
    string status;              //Exchange or full-time
    string nationality;         //Nationality of student
    string res_status;          //Residential status

public:
    void newStudent();          //function for adding a new student
    void viewStudent();
    string getUID(){return uid;}
    string getData(string);
    void setData(string, string);
};

class StudentAcademic : protected Student{
    array<string,6> cur_courses;
    array<string,42> past_courses;
    int total_credits;

public:
    void newStudentAcademic();
    void viewStudentAcademic(unordered_map<string, string>);
};