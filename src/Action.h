#ifndef ACTION_H
#define ACTION_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
const std::string tpath;//未完成的任务路径
const std::string fpath;//完成的任务路径
//初始化
void init();
//添加任务
inline void addTask(const std::string task);
//获取任务列表
inline void getTaskList();
//获取完成的任务列表
inline void getFinshList();
//获取任务
inline void getTask(const int index); 
//获取完成的任务
inline void getFinshTask(const int index); 
//完成任务
inline void finshTask(const int index); 
//把任务返回
inline void returnTask(const int index);
//查找任务
inline void findTask(const std::string task); 
//查找完成的任务
inline void findFinshTask(const std::string task);
//删除任务
inline void deleteTask(const int index);
//删除完成的任务
inline void deleteFinshedTask(const int index);
#endif //!ACTION_H