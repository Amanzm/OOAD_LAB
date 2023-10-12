#ifndef SCHOOL_H
#define SCHOOL_H

#include <bits/stdc++.h>

class Student {
public:
    Student(const std::string& name, int studentID, int age);
    void setName(const std::string& name);
    void setStudentID(int studentID);
    void setAge(int age);
    std::string getName() const;
    int getStudentID() const;
    int getAge() const;

private:
    std::string name;
    int studentID;
    int age;
};

class UndergraduateStudent : public Student {
public:
    UndergraduateStudent(const std::string& name, int studentID, int age, const std::string& major, int completedCredits);
    void setMajor(const std::string& major);
    void setCompletedCredits(int completedCredits);
    std::string getMajor() const;
    int getCompletedCredits() const;

private:
    std::string major;
    int completedCredits;
};

class GraduateStudent : public Student {
public:
    GraduateStudent(const std::string& name, int studentID, int age, const std::string& researchArea, const std::string& thesisTopic);
    void setResearchArea(const std::string& researchArea);
    void setThesisTopic(const std::string& thesisTopic);
    std::string getResearchArea() const;
    std::string getThesisTopic() const;

private:
    std::string researchArea;
    std::string thesisTopic;
};

class Course {
public:
    Course(const std::string& code, const std::string& name, const std::string& instructor);
    void setCode(const std::string& code);
    void setName(const std::string& name);
    void setInstructor(const std::string& instructor);
    std::string getCode() const;
    std::string getName() const;
    std::string getInstructor() const;

private:
    std::string code;
    std::string name;
    std::string instructor;
};

class School {
public:
    void enrollStudent(Student* student, Course* course);
    void displayStudentDetails() const;
    void displayCourseDetails() const;

private:
    std::vector<Student*> students;
    std::vector<Course*> courses;
};

#endif // SCHOOL_H
