#include "State.h"

int State::numStates = 0;

State::State(string n)
{
	name = n;
	numStates++;
}

State::~State()
{
	numStates--;
}

string State::getName()
{
	return name;
}

void State::setName(string n)
{
	name = n;
}

int State::getNumStates()
{
	return numStates;
}

vector<State> operator+(const State &left, const State &right)
{
	vector<State> states;
	states.push_back(left);
	states.push_back(right);
	return states;
}

vector<State> operator+(const vector<State> &left, const State &right)
{
	vector<State> states = left;
	states.push_back(right);
	return states;
}

// bool operator==(const State &left, const State &right)
// {
// 	return left.getName() == right.getName();
// }
