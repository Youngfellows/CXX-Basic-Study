G+ = g++
TARGET = app
OBJS = main.o Circle.o
SOURS = main.cpp Circle.cpp
$(TARGET):$(OBJS)
	$(G+) -o $@ $^
$(OBJS):$(SOURS)	
	$(G+) -c -o $@ $*.cpp
clean:
	rm app *.o
