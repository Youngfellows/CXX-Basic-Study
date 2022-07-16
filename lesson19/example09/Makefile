
# 隐含规则: 指定编译器
CPP = g++
# 隐含规则: 指定编译选项
CPPFLAGS = -g3 -Wall

#指定最终编译的目标
TARGET = sample.out

#指定编译文件
LIBRARY_SRC = \
		./share/Product.cpp\
		./sample.cpp\

#指定最终生成的目标
all:$(TARGET)

$(TARGET):$(LIBRARY_SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	@echo "这行将不会被打印"
	echo "这行将会被打印xxx"
	rm -rf $(TARGET) *.o 

.PHONY: clean