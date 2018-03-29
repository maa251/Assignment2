#pragma once

#include "State.h"
#include "Transition.h"
#include <vector>
#include <map>
#include <fstream>

using namespace std;

class Transition;
class Port;


class FSM
{
private:
    map<string, State> states;
	vector<Transition> transitions;
	map<string, int> stateMap; // Used in drawFSM
	void initStateMap();
	int time;
	State currentState;

public:	
	FSM(map<string, State> states, State currentState); // Constructor
	~FSM();
	void addTransition(Transition & transition);

	// TODO: All these functions are currently not defined in FSM.cpp but not in FSM2.cpp when I
	// finish doing isPortEnable and execute I'll add the other functions if they're still relevant
	void printPorts(); 
	void printStates(); // Prints the States in states
	void run(int steps); // Runs for steps number of rounds
	void reset(State s); // Resets currentState to s, and Time to 0
	void drawFSM(); // Creates a python script fsm.py and runs it to create the fsm diagram


	// If we were handling exceptions we would obviously throw one in all three of these functions if the port being passed 
	// wasn't the port for any of the transitions in the fsm
	bool isPortEnabled(Port & port);
	// bool isPortEnabled(Port & port, Transition & transition);
	void execute(Port & port);
	

};
