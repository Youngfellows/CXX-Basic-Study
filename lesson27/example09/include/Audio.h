#ifndef AUDIO_H
#define AUDIO_H

#include "./Global.h"

/**
 * @brief 实体类,模拟音频数据
 *
 */
class Audio
{
private:
    int id;           //编号
    std::string data; //数据内容

public:
    Audio(int id, std::string data);
    ~Audio();
    int getId();
    std::string getData();
    void toString();
};
#endif