//#include "StudentManager.h"
//#include <iostream>    
//#include <vector>      
//#include <string>     
//
//void StudentManager::addStudent(int id, const std::string& name, float grade) {
//    records.push_back(Student(id, name, grade));
//}
//
//void StudentManager::updateGrade(int id, float newGrade) {
//    for (Student& student : records) {
//        if (student.id == id) {
//            student.grade = newGrade;
//            return;
//        }
//    }
//    std::cout << "Student ID not found." << std::endl;
//}
//
//void StudentManager::displayRecords() const {
//    for (const Student& student : records) {
//        std::cout << "ID: " << student.id << ", Name: " << student.name << ", Grade: " << student.grade << std::endl;
//    }
//}
//
//StudentManager::~StudentManager() {
//    for (Student& student : records) {} 
//    records.clear();
//}
