#ifndef GLOBAL_H
#define GLOBAL_H

#include <iostream>
#include <string>
#include <memory>
#include <list>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <ctime>
#include <sstream>
#include <queue>
#include <atomic>
#include <sstream>

#include <unistd.h>      // for syscall()
#include <sys/syscall.h> // for SYS_xxx definitions

using namespace std;

//定义常量
const int MAX_CACHES_SIZE = 10;       //最大缓存数量
const int PRODUCER_THREAD_NUMBER = 5; //生产者线程数
const int CONSUMER_THREAD_NUMBER = 8; //消费者线程数

#endif