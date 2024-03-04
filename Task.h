#pragma once

#include <string> 
using namespace std;

class Task {
public:
	string description;
	bool completed;

	Task(const string& desc);
};
