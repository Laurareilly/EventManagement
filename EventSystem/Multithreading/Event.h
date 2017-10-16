#ifndef EVENT_H
#define EVENT_H


class Event
{
public:
	Event();
	virtual ~Event();

	virtual int Execute() = 0;

private:
};


class EventManager
{
public:
	static EventManager* InitInstance()
	{
		if (!mpInstance)
			mpInstance = new EventManager;

		return mpInstance;;
	}

	static EventManager* GetInstance()
	{
		return mpInstance;;
	}

	EventManager() { queue = new Event*; }
	~EventManager() { delete queue; queue = nullptr; };

	int AddEvent(Event *e)
	{
		queue[mNumEvents] = e;
		++mNumEvents;
		return 0;
	}

	int ExecuteAll()
	{
		Event* tmpEvent;

		while (mNumEvents > 0)
		{
			tmpEvent = queue[0];
			tmpEvent->Execute();
			//pop the first thing out of the queue
			delete tmpEvent;
		}

		return 0;
	}

private:
	static EventManager *mpInstance;
	Event **queue;
	int mNumEvents;
	void pop()
	{
		for (int i = 0; i < mNumEvents - 1; ++i)
		{
			queue[i] = queue[i + 1];
		}
		delete queue[mNumEvents];
		--mNumEvents;
	}
};

#endif	