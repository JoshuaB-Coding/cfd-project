CXX = g++
CXXFLAGS = -Wall -O0
HDRS = header.h
OBJS = main.o

%.o : %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

sim: $(OBJS)
	$(CXX) -o $@ $^

all: sim

.PHONY: run
run: ./sim
	@echo Executing sim [main.cpp code]...
	./sim

.PHONY: clean
clean:
	rm *.o