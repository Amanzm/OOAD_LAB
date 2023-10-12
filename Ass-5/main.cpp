#include <bits/stdc++.h>
#include "School.h"
using namespace std;

int main() {
    // Create instances of School, Students, and Courses
    School school;
    
    UndergraduateStudent undergrad("Aman Modan", 1001, 20, "Computer Science", 60);
    GraduateStudent grad("Ayan Modan", 2001, 25, "Machine Learning", "Deep Learning");
    
    Course course1("CS101", "Introduction to Programming", "Dr. Singh");
    Course course2("ML202", "Machine Learning Algorithms", "Dr. Rathod");
    
    // Enroll students in courses
    school.enrollStudent(&undergrad, &course1);
    school.enrollStudent(&grad, &course2);
    
    // Display student and course details
    school.displayStudentDetails();
    school.displayCourseDetails();
    
    return 0;
}
