#ifndef SENECA_TIMEDTASK_H
#define SENECA_TIMEDTASK_H

#include <chrono>
namespace seneca
{
	struct Task
	{
		std::string taskName {};
		std::string unitsTime {};
		std::chrono::steady_clock::duration taskDuration {};
	};

	class TimedTask
	{
		static constexpr int m_maxTasks = 10;
		Task m_task[m_maxTasks] {};
		int m_numRecords {};
		std::chrono::steady_clock::time_point m_start {};
		std::chrono::steady_clock::time_point m_end {};

	public:
		TimedTask(){};
		// a modifier that starts the timer for an event
		void startClock();
		//a modifier that stops the timer for an event
		void stopClock();
		//a modifier that receives the address of a C-style null-terminated string that holds the name of the task.
		void addTask(const char*);
		//a friend insertion operator that receives a reference to an std::ostream object and a TimedTaskobject.
		friend std::ostream& operator<<(std::ostream&, const TimedTask&);
	};

}


#endif
