#include "Port.h"

Port::Port(FSM & fsm) : fsm(fsm)
{
}

Port::~Port()
{
}

bool Port::isEnabled()
{
	return fsm.isPortEnabled(*this);
}

void Port::execute()
{
	fsm.execute(*this);
}

bool operator==(const Port &left, const Port &right)
{
	return true;
}
