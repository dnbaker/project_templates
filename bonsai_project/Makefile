CXX?=g++
INCLUDE_PATHS+=../bonsai/hll ../bonsai/hll/libpopcnt ../bonsai/hll/include ../bonsai/include ../bonsai

INCLUDE=$(patsubst %,-I%,$(INCLUDE_PATHS))

LDFLAGS+=-lz

all: $(patsubst %.cpp,%,$(wildcard *.cpp))

%: %.cpp
	$(CXX) -std=c++14 -march=native -O3 -o $@ $< $(INCLUDE) $(LDFLAGS)
