#include "Action.h"
#include "func.h"
#include <cstdlib>

using std::cout;
using std::endl;
void init() {
	system("mkdir ~/.config/task");
	system("touch ~/.config/task/task.conf");
	system("touch ~/.config/task/task.task");
	system("touch ~/.config/task/finshed.task");
}
inline void addTask(std::string task) {
	write(task, tpath, WMode::APPEND);
	cout<<"add task:"<<task<<endl;
}
inline void getTaskList() 					{ getLists(tpath); }
inline void getFinshList() 					{ getLists(fpath); }
inline void getTask(const int index) 		{ getSingle(tpath, index); }
inline void getFinshTask(const int index) 	{ getSingle(tpath, index); }
inline void finshTask(const int index) 		{ moveTask(tpath, fpath, index); }
inline void returnTask(const int index)		{ moveTask(fpath, tpath, index); }
inline void findTask(std::string task) 		{ findSingleTask(task, tpath); }
inline void findFinshTask(std::string task) { findSingleTask(task, fpath); }
inline void deleteTask(int index) 			{ removeTask(tpath, index); }
inline void deleteFinshedTask(int index)	{ removeTask(fpath, index); }