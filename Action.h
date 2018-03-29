#pragma once

#include <functional>

using namespace std;

class Action
{
private:
	function<void()> func;
public:
	Action(function<void()> f); // Constructor, sets func = f
	~Action(); // Destructor
	void doAction(); // Runs func
};
