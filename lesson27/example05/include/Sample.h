#ifndef SAMPLE_H
#define SAMPLE_H

#include "./Global.h"
#include "./Audio.h"
#include "./AudioFlinger.h"
#include "./AudioQueue.h"

void audioCallback(std::shared_ptr<Audio> audio); //回调函数

void test1();
void test2();
void test3();
void test4();

#endif