#ifndef CALLBACK_H
#define CALLBACK_H

#include "./Audio.h"

/**
 * @brief 定义一个函数指针回调要消费的数据
 * @param audio 回调的音频数据
 */
typedef void (*AudioCallback)(Audio audio);

#endif