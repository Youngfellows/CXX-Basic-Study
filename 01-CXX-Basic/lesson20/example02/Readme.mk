#程序版本号
VERSION = 1.0.0		
 
#定义变量，使用变量:$(变量名)
CC=g++
 
#定义变量srcs，表示需要编译的源文件，需要表明路径，如果直接写表示这些cpp文件和makefile在同一个目录下，如果有多个源文件，每行以\结尾
#其中wildcard和patsubst为关键字不同目录下cpp文件，$(wildcard *.cpp /xxx/xxx/*.cpp), 替换所有的cpp为o表示 $(patsubst %cpp,%o,$(SRCS)) 
SRCS=$(wildcard *.cpp)
		
#将.cpp源文件编译成.o文件: 定义变量OBJS,表示将原文件中所有以.cpp结尾的文件替换成以.o结尾，
OBJS=$(SRCS:.cpp=.o)
 
#头文件路径,实际编译把依赖头文件路径放入环境变量
INCLUDES = -I/home/gocode/src/CSrc/include
 
#库文件名字 	
LIBS = -llog4cpp -lpqxx -lpq -lIVS_SDK
 
#库文件路径,实际编译把依赖头文件路径放入环境变量
LIB_PATH = -L/home/gocode/src/CSrc/lib
 
#宏定义 在代码调试的过程中，我们通常会加个宏定义来控制此段代码是否被编译
DEBUG = -D_MACRO
 
#编译标志位
CFLAGS = -Wall -c	
 
#定义变量，表示最终生成的可执行文件名
TARGET = main
 
#生成最终可执行文件
$(TARGET): $(OBJS)	
	@mkdir -p output/	#创建一个目录，用于存放已编译的目标
	$(CC) -std=c++11 $(OBJS)  $(LIB_PATH) $(LIBS) -pthread -o output/$(TARGET)
 
#所有的[.cpp]文件都编译成[.o]文件
%.o: %.cpp
	$(CC) -std=c++11  $(INCLUDES) $(LIB_PATH) $(LIBS) $(DEBUG) $(CFLAGS) -pthread $< -o $@  -w
 
#伪目标 执行# make clean指令删除*.o文件
.PHONY: clean
clean:
	rm -rf $(OBJS) output/
