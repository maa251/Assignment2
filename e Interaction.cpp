#pragma once

#include <vector>
#include "Port.h"
#include "Action.h"
#include "Condition.h"

using namespace std;

class Interaction 
{

public:
	Interaction(vector<Port> ports, Action & action, Condition & condition);
	~Ineraction();
	vector<Port> ports;
	Action & action;
	Condition & condition;
	bool isEnabled();

};
