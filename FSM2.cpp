#include "FSM2.h"
#include <iostream>

using namespace std;

FSM::FSM(map<string, State> states, State currentState)
	: states(states), currentState(currentState), transitions()
{
	time = 0;
}

FSM::~FSM()
{
}

void FSM::addTransition(Transition & transition)
{
	transitions.push_back(transition);
}

void FSM::reset(State state)
{
	//Eventually throw an Exception if the state isn't in states
	currentState = state;
	time = 0;
}

bool FSM::isPortEnabled(Port & port)
{
	for (Transition & transition : transitions)
	{
		if (transition.getState1().getName() == currentState.getName() && &(transition.getPort()) == &port && transition.checkCondition()) return true;
	}
	return false;
}
// bool FSM::isPortEnabled(Port & port, Transition  & transition)
// {
// 	for (Transition & t : transitions)
// 	{
// 		if (t.getState1().getName() == currentState.getName() && &(t.getPort()) == &port && t.checkCondition()) 
// 		{
// 			transition = t;
// 			return true;
// 		}
// 	}
// 	return false;
// }

void FSM::execute(Port & port)
{
	// Dunno if this needs to be a reference or if it will even work as a reference. It definitely doesn't need to be one
	
	// if (isPortEnabled(port, transition))
	// 
	// 	transition.execute();
	// 	currentState = transition.getState2();
	// }
	for (Transition & transition : transitions)
	{
		if (transition.getState1().getName() == currentState.getName() && &(transition.getPort()) == &port && transition.checkCondition()) 
		{
			transition.execute();
			currentState = transition.getState2();
		}
	}
}



