#include "ToDoList.h"
#include <iostream> 

using namespace std; 

void ToDoList::addTask(const string& desc) {
    tasks.push_back(Task(desc));
}

void ToDoList::listTasks() const {
    for (int i = 0; i < tasks.size(); i++) {
        cout << (tasks[i].completed ? "[COMPLETED]" : "[ ]") << " " << i + 1 << ". " << tasks[i].description << endl;
    }
}

void ToDoList::markCompleted(int taskNumber) {
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        cout << "Task " << taskNumber << " marked as completed." << endl;
    }
    else {
        cout << "Invalid task number." << endl;
    }
}
