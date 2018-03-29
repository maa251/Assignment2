#pragma once

#include <vector>
#include "Interaction.h"

using namespace std;

class System
{
public:
	System(vector<Interaction> interactions);
	~System();
	vector<Interaction> interactions;
	void run();
};

