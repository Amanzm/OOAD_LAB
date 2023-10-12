#include <bits/stdc++.h>
#include "School.h"
using namespace std;

Student::Student(const  string& name, int studentID, int age)
    : name(name), studentID(studentID), age(age) {}

void Student::setName(const  string& name) {
    this->name = name;
}

void Student::setStudentID(int studentID) {
    this->studentID = studentID;
}

void Student::setAge(int age) {
    this->age = age;
}

 string Student::getName() const {
    return name;
}

int Student::getStudentID() const {
    return studentID;
}

int Student::getAge() const {
    return age;
}

UndergraduateStudent::UndergraduateStudent(const  string& name, int studentID, int age, const  string& major, int completedCredits)
    : Student(name, studentID, age), major(major), completedCredits(completedCredits) {}

void UndergraduateStudent::setMajor(const  string& major) {
    this->major = major;
}

void UndergraduateStudent::setCompletedCredits(int completedCredits) {
    this->completedCredits = completedCredits;
}

 string UndergraduateStudent::getMajor() const {
    return major;
}

int UndergraduateStudent::getCompletedCredits() const {
    return completedCredits;
}

GraduateStudent::GraduateStudent(const  string& name, int studentID, int age, const  string& researchArea, const  string& thesisTopic)
    : Student(name, studentID, age), researchArea(researchArea), thesisTopic(thesisTopic) {}

void GraduateStudent::setResearchArea(const  string& researchArea) {
    this->researchArea = researchArea;
}

void GraduateStudent::setThesisTopic(const  string& thesisTopic) {
    this->thesisTopic = thesisTopic;
}

 string GraduateStudent::getResearchArea() const {
    return researchArea;
}

 string GraduateStudent::getThesisTopic() const {
    return thesisTopic;
}

Course::Course(const  string& code, const  string& name, const  string& instructor)
    : code(code), name(name), instructor(instructor) {}

void Course::setCode(const  string& code) {
    this->code = code;
}

void Course::setName(const  string& name) {
    this->name = name;
}

void Course::setInstructor(const  string& instructor) {
    this->instructor = instructor;
}

 string Course::getCode() const {
    return code;
}

 string Course::getName() const {
    return name;
}

 string Course::getInstructor() const {
    return instructor;
}

void School::enrollStudent(Student* student, Course* course) {
    students.push_back(student);
    courses.push_back(course);
}

void School::displayStudentDetails() const {
     cout << "Student Details:\n";
    for (const auto& student : students) {
         cout << "Name: " << student->getName() << ", ID: " << student->getStudentID() << ", Age: " << student->getAge() << "\n";
    }
}

void School::displayCourseDetails() const {
     cout << "Course Details:\n";
    for (const auto& course : courses) {
         cout << "Code: " << course->getCode() << ", Name: " << course->getName() << ", Instructor: " << course->getInstructor() << "\n";
    }
}
