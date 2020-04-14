CXX?=g++

INCLUDE=-I../sketch -I../sketch/include

all: $(patsubst %.cpp,%,$(wildcard *.cpp))

%: %.cpp
	$(CXX) -std=c++14 -march=native -O3 -o $@ $< $(INCLUDE)
