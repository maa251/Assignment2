#include "Condition.h"

Condition::Condition(function<bool()> f) : func(f)
{

}

Condition::~Condition()
{

}

bool Condition::check()
{
	return func();
}
