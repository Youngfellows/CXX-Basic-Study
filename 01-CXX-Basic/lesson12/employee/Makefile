G+ = g++
TARGET = app
OBJS = main.o Employee.o Manager.o HourlyWorker.o PieceWorker.o
SOURS = main.cpp Employee.cpp Manager.cpp HourlyWorker.cpp PieceWorker.cpp
$(TARGET):$(OBJS)
	$(G+) -o $@ $^
$(OBJS):$(SOURS)	
	$(G+) -c -o $@ $*.cpp
clean:
	rm app *.o
