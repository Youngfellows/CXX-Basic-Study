#include "../include/Audio.h"

Audio::Audio(int id, std::string data)
{
    // cout << "Audio()构造函数" << endl;
    this->id = id;
    this->data = data;
}

Audio::~Audio()
{
    // cout << "~Audio()析构函数" << endl;
}

int Audio::getId()
{
    return this->id;
}

std::string Audio::getData()
{
    return this->data;
}

void Audio::toString()
{
    cout << "id:" << this->id << ",data:" << this->data << endl;
}