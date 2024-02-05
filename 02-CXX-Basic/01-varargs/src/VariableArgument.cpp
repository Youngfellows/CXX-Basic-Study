#include <stdarg.h>
#include <stdio.h>
#include "VariableArgument.h"

/**
 * 打印可变参数列表
 * @param count
 * @param ...
 */
void printNumbers(int count, ...) {
    va_list ap;
    // 初始化ap，指向可变参数列表的第一个参数
    va_start(ap, count);
    for (int i = 0; i < count; ++i) {
        // 依次获取可变参数列表中的参数
        int num = va_arg(ap, int);
        printf("%d ", num);
    }
    // 结束args的使用
    va_end(ap);
    printf("\n");
}

/**
 * 连续打印出自定义格式的文字
 * @param pFmt
 * @param ...
 * @return
 */
std::string format(const char* pFmt, ...) {
#define FORMAT_MSG_BUFFER_SIZE (2048000)
    char szBuffer[FORMAT_MSG_BUFFER_SIZE + 1] = { 0 };
    va_list args;
    va_start(args, pFmt);
    vsnprintf(szBuffer, FORMAT_MSG_BUFFER_SIZE, pFmt, args);
    va_end(args);
    std::string strRet = szBuffer;
    //printf("%s", strRet.c_str());
    return strRet;
}