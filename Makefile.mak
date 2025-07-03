CXX = g++
CXXFLAGS = -Wall -Wextra

SRCS = matriz.cpp primo.cpp vetor.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	-rm -f $(EXES)