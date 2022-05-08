1. 模式字符串替换函数，函数使用格式如下：
    $(patsubst <pattern>,<replacement>,<text>)
    函数说明：函数功能是查找 text 中的单词是否符合模式 pattern，如果匹配的话，则用 replacement 替换。
    返回值为替换后的新字符串。
    实例：
    OBJ=$(patsubst %.c,%.o,1.c 2.c 3.c)
    all:
        @echo $(OBJ)

    执行 make 命令，我们可以得到的值是 "1.o 2.o 3.o"，这些都是替换后的值。
    注：all通常也是一个.PHONY目标【伪目标】

2. 获取匹配模式文件名函数，命令使用格式如下
    $(wildcard PATTERN)
    函数说明：函数的功能是列出当前目录下所有符合模式的 PATTERN 格式的文件名。
    返回值为空格分隔并且存在当前目录下的所有符合模式 PATTERN 的文件名。

    实例：
    ALLFILE=$(wildcard %.cpp)
    all:
        @echo $(ALLFILE)