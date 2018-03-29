#include "Interaction.h"
#include <iostream>

using namespace std;

Interaction::Interaction(vector<Port*> ports, Action & action, Condition & condition)
	: ports(ports), action(action), condition(condition)
{
}

Interaction::~Interaction()
{
}

bool Interaction::isEnabled()
{
	if (!condition.check()) return false;
	for (Port * port : ports)
	{

		if (!(port->isEnabled())) return false;
		cout << "INTEACTION: WORKS\n";
	}
	return true;
}

void Interaction::execute()
{
	for (Port * port : ports)
	{
		port->execute();
	}
}
