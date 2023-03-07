BINARIES = main

#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -g

all: ${BINARIES}

main: main.o DayOfYear.o
	${CXX} ${CXXFLAGS} -o $@ $^

clean:
	/bin/rm -f *.o ${BINARIES}