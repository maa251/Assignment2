#pragma once

#include "FSM2.h"

using namespace std;

class FSM;

class Port
{
public:
	FSM & fsm;
	Port(FSM & fsm); // Constructor
	~Port(); // Destructor
	bool isEnabled();
	void execute();
};

bool operator==(const Port &left, const Port $right);
