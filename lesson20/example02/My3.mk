#程序版本号
VERSION = 1.0.0		
 
#定义变量，使用变量:$(变量名)
CPP = g++

# 隐含规则: 指定编译选项
CPPFLAGS = -Wall -std=c++11

#编译最终目标
TARGET = sample.out

#编译生成文件保存目录
OUTPUT = output/

OUTPUT_HSARE = "./share/"

#定义变量srcs，表示需要编译的源文件，需要表明路径，如果直接写表示这些cpp文件和makefile在同一个目录下，如果有多个源文件，每行以\结尾
#其中wildcard和patsubst为关键字不同目录下cpp文件，$(wildcard *.cpp /xxx/xxx/*.cpp), 替换所有的cpp为o表示 $(patsubst %cpp,%o,$(SRCS)) 
SRCS_MAIN = $(wildcard *.cpp)
SRCS_SHARE = $(wildcard ./share/*.cpp)
		
#将.cpp源文件编译成.o文件: 定义变量OBJS,表示将原文件中所有以.cpp结尾的文件替换成以.o结尾，
OBJS_MAIN = $(SRCS_MAIN:.cpp=.o)
OBJS_SHARE = $(SRCS_SHARE:.cpp=.o)

#指定编译文件
OBJS = \
		$(OBJS_MAIN)\
		$(OBJS_SHARE)\

#指定最终生成的目标
all:$(TARGET)

#生成最终可执行文件
$(TARGET):$(OBJS)
	@mkdir -p $(OUTPUT)
	@echo "SRCS_MAIN=" $(SRCS_MAIN)
	@echo "SRCS_SHARE=" $(SRCS_SHARE)
	@echo "OBJS_MAIN=" $(OBJS_MAIN)
	@echo "OBJS_SHARE=" $(OBJS_SHARE)
	@echo "OBJS=" $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(OUTPUT)$@ $^

clean:
	@echo "这行将不会被打印"
	echo "这行将会被打印xxx"
	rm -rf $(OUTPUT)
	rm -rf *.o
	rm -rf $(OUTPUT_HSARE)*.o 

.PHONY: clean
