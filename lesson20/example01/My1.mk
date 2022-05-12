
# 隐含规则: 指定编译器
CPP = g++
# 隐含规则: 指定编译选项
CPPFLAGS = -g3 -Wall

#指定最终编译的目标
TARGET = sample.out

#创建一个目录，用于存放已编译的目标
OUTPUT = output/

#指定编译文件
LIBRARY_SRC = \
		./share/Complex.cpp\
		./share/Complex2.cpp\
		./sample.cpp\


#指定最终生成的目标
all:$(TARGET)


$(TARGET):$(LIBRARY_SRC)
	@mkdir -p $(OUTPUT)
	$(CPP) $(CPPFLAGS) -o $(OUTPUT)$@ $^

clean:
	@echo "这行将不会被打印"
	echo "这行将会被打印xxx"
	rm -rf $(TARGET) $(OUTPUT) *.o 

.PHONY: clean