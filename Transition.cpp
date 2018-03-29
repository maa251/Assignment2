#include "Transition.h"
//#include <iostream>

Transition::Transition(State &s1, State &s2,FSM & fsm, Port &p, Condition &c, Action &a)
	: state1(s1), state2(s2), port(p), condition(c), action(a), fsm(fsm)
{
	fsm.addTransition(*this);
}
// Transition::Transition()
// {
	
// }

Transition::~Transition()
{

}

bool Transition::checkCondition()
{
	return condition.check();
}

void Transition::doAction()
{
	action.doAction();
}


// bool Transition::attemptTransition()
// {
// 	if (checkPort() && checkCondition())
// 	{
// 		doAction();
// 		return true;
// 	}
// 	return false;
// }

State& Transition::getState1()
{
	return state1;
}

State& Transition::getState2()
{
	return state2;
}

Port& Transition::getPort()
{
	return port;
}

string Transition::toString()
{
	return getState1().getName() + " to " + getState2().getName();
}

void Transition::execute()
{
	action.doAction();
}

vector<Transition> operator+(const Transition &left, const Transition &right)
{
	vector<Transition> transitions;
	transitions.push_back(left);
	transitions.push_back(right);
	return transitions;
}

vector<Transition> operator+(const vector<Transition> &left, const Transition &right)
{
	vector<Transition> transitions = left;
	transitions.push_back(right);
	return transitions;
}
