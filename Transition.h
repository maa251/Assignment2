#pragma once

#include "State.h"
// #include "Port.h"
#include "Condition.h"
#include "Action.h"
#include "FSM2.h"
using namespace std;

class Port;
class FSM;

class Transition
{
private:
	State &state1, &state2;
	Port &port;
	Condition &condition;
	Action &action;
	FSM & fsm;

	void doAction(); // Runs action.doAction()
	bool checkPort(); // Returns value of port
public:
	Transition(State &s1, State &s2,FSM & fsm, Port &p, Condition &c, Action &a); // Constructor
	// Transition();
	~Transition(); // Destructor
	// bool attemptTransition(); // Tries transition, if fails returns false and skips action


	bool checkCondition(); 
	State& getState1(); // Returns state1
	State& getState2(); // Returns state2
	Port& getPort();
	void execute();

	string toString(); // Convert transition to a string for printing
};

vector<Transition> operator+(const Transition &left, const Transition &right); // Overloading operator+ to enable Transition + Transition
vector<Transition> operator+(const vector<Transition> &left, const Transition &right); // Overloading operator+ to enable Transition + Transition + Transition
