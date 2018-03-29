#pragma once

#include <string>
#include <vector>
using namespace std;

class State
{
private:
	string name; // Name of state
	static int numStates; // Total number of declared states
public:
	State(string n); // Constructor, sets name of state to n, increments numStates
	~State(); // Destructor, decrements numStates
	string getName(); // Returns name of state
	void setName(string n); // Sets name of state to n
	static int getNumStates(); // Returns number of states numStates
};

vector<State> operator+(const State &left, const State &right); // Overloading operator+ to add State + State
vector<State> operator+(const vector<State> &left, const State &right); // Overloading operator+ to add State + State + State ...
// bool operator==(const State &left, const State $right);
