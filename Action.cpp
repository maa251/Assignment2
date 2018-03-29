#include "Action.h"

Action::Action(function<void()> f) : func(f)
{

}

Action::~Action()
{

}

void Action::doAction()
{
	func();
}