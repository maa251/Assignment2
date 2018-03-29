#include "System.h"
#include <iostream>

using namespace std;

System::System(vector<Interaction> interactions) : interactions(interactions)
{
}

System::~System()
{
}

void System::run()
{
	while (true)
	{
		for (Interaction & i : interactions)
		{
			if (i.isEnabled())
			{
				cout << "IT WORK HERE\n";
				i.execute();
			}
		}
	}
}

