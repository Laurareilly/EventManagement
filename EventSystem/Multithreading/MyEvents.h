#ifndef MYEVENTS
#define MYEVENTS


#include "Event.h"
#include <iostream>

class PrintHelloEvent : public Event
{
	virtual int Execute()
	{
		std::cout << "hey";
		return 0;
	}
};

class PrintGoodbyeEvent : public Event
{
	virtual int Execute()
	{
		std::cout << "bye";
		return 0;
	}
};


#endif