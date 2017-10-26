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


int main()
{
	EventManager::InitInstance();


	PrintGoodbyeEvent *e = new PrintGoodbyeEvent;
	EventManager::mpInstance->AddEvent(e);

	PrintHelloEvent *hello = new PrintHelloEvent;
	EventManager::mpInstance->AddEvent(hello);


	EventManager::GetInstance()->ExecuteAll();

	cin.ignore();
	cin.get();
	return 0;
}