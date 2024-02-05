#ifndef _VARIABLE_ARGUMENT_H
#define _VARIABLE_ARGUMENT_H

#include <string>


/**
 * 打印可变参数列表
 * @param count
 * @param ...
 */
void printNumbers(int count, ...);

/**
 * 连续打印出自定义格式的文字
 * @param pFmt
 * @param ...
 * @return
 */
std::string format(const char *pFmt, ...);

#endif
