
#include "StudentManager.h"
#include <iostream>    

int main() {
	StudentManager sm;
	sm.addStudent(1, "John Doe", 92.5);
	sm.addStudent(2, "Jane Doe", 88.0);
	sm.displayRecords();
	sm.updateGrade(1, 95.0);
	std::cout << "After grade update:" << std::endl;
	sm.displayRecords();

	return 0;
}
