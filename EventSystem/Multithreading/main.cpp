#include <iostream>
#include <Windows.h>

#include "Event.h"
#include "MyEvents.h"
#include "Queue.h"
using namespace std;

EventManager* EventManager::mpInstance = nullptr;

class GameState
{
	int game;
};

void printHelloWorld()
{
	cout << "Hello world ";
}

void printGoodbyeWorld()
{
	cout << "Good bye world ";
}

//int helloThreadLaunch(void *params)
//{
//	EventManager *eMgrPtr = (EventManager *)params;
//	while (1)
//	{
//		PrintHelloEvent *e = new PrintHelloEvent;
//		eMgrPtr->AddEvent(e);
//	}
//
//	return 0;
//}
//
//int goodbyeThreadLaunch(void *params)
//{
//
//	EventManager *eMgrPtr = (EventManager *)params;
//	while (1)
//	{
//		PrintGoodbyeEvent *e = new PrintGoodbyeEvent;
//		eMgrPtr->AddEvent(e);
//	}
//	return 0;
//}



int main()
{
	//EventManager::InitInstance();


	//PrintGoodbyeEvent *e = new PrintGoodbyeEvent;
	//EventManager::mpInstance->AddEvent(e);

	//EventManager::GetInstance()->ExecuteAll();



	Queue<int> myQueue;
	myQueue.enqueue(5);

	cin.ignore();
	cin.get();
	return 0;
}