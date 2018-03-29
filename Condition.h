#pragma once

#include <functional>

using namespace std;

class Condition
{
private:
	function<bool()> func;
public:
	Condition(function<bool()> f); // Constructor
	~Condition(); // Destructor
	bool check(); // Runs func
};
