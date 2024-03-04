
#pragma once

#include <iostream>
#include <vector>
#include <string>

class StudentManager {
private:
    struct Student {
        int id;
        std::string name; 
        float grade;

        Student(int i, const std::string& n, float g) : id(i), name(n), grade(g) {}
    };

    std::vector<Student> records; 

public:
    void addStudent(int id, const std::string& name, float grade);
    void updateGrade(int id, float newGrade);
    void displayRecords() const;

    ~StudentManager();
};
