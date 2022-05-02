TARGET = app
objects = main.o student.o undergraduate.o
# 隐含规则: 指定编译器
CXX = g++
# 隐含规则: 指定编译选项
CXXFLAGS = -g

$(TARGET):$(objects)
	$(CXX) -o $@ $^
$(objects):%.o:%.cpp

#main.o:main.cpp
#student.o:student.cpp
#undergraduate.o:undergraduate.cpp

clean:
	@echo "这行将不会被打印"
	echo "这行将会被打印xxx"
	rm app *.o