#include "../include/Audio.h"

Audio::Audio()
{
}

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

void Audio::set(int id, std::string data)
{
    this->id = id;
    this->data = data;
}

int Audio::getId()
{
    return this->id;
}

std::string Audio::getData()
{
    return this->data;
}

std::string Audio::toString()
{
    std::stringstream oss;
    oss << "[id:" << this->id << ",data:" << this->data << "]";
    return oss.str();
}