#程序版本号
VERSION = 1.0.0		
 
#定义变量，使用变量:$(变量名)
CPP = g++

# 隐含规则: 指定编译选项
CPPFLAGS = -Wall -std=c++11

#最终生成目录
ODIR=obj
OHSARE_DIR = "./share/"

#全部.cpp文件
SRCS_MAIN = $(wildcard *.cpp)
SRCS_SHARE = $(wildcard ./share/*.cpp)

#编译最终目标
TARGET = test_sample.out

#做模式替换,把.cpp替换成.o
_DEPS_MAIN = $(patsubst %.cpp, %.o,$(SRCS_MAIN))
_DEPS_SHARE = $(patsubst %.cpp, %.o,$(SRCS_SHARE))

#指定编译文件
OBJS = $(_DEPS_MAIN) $(_DEPS_SHARE)

all:$(TARGET)

$(TARGET):$(OBJS)
	@mkdir -p $(ODIR)
	@echo "TARGET=" $(TARGET)
	@echo "_DEPS_MAIN=" $(_DEPS_MAIN)
	@echo "_DEPS_SHARE=" $(_DEPS_SHARE)
	@echo "OBJS=" $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(ODIR)/$@ $^	-lpthread
	rm -rf ${OBJS}

clean:
	@echo "这行将不会被打印"
	echo "这行将会被打印xxx"
	rm -rf $(ODIR)
	rm -rf *.o
	rm -rf $(OHSARE_DIR)*.o 

.PHONY: clean
