CXX = g++
CFLAGS = -Wall
LDFLAGS = 

ALLCPPFILE = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
TARGETS = $(patsubst %.o, %.out, $(OBJS))

.PHONY: all
all: $(TARGETS)
	@echo $(ALLCPPFILE)
	@echo $(OBJS)
	@echo $(TARGETS)

%.out: %.o
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(LDFLAGS) -c -o $@ $^


clean:
	rm -f *.out *.o
