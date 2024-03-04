#include "ToDoList.h"
#include <iostream> 
using namespace std; 
int main() {
	ToDoList myList;
	myList.addTask("Finish Lab 3");
	myList.addTask("Buy groceries");
	myList.listTasks();

	myList.markCompleted(2); 
	myList.listTasks();

	return 0;
}
