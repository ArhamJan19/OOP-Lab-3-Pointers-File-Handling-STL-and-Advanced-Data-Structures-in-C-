#pragma once

#include "Task.h"
#include<vector>

class ToDoList {
public:
	void addTask(const string& desc);
	void listTasks() const;
	void markCompleted(int taskNumber);

private:
	vector<Task> tasks;
};
