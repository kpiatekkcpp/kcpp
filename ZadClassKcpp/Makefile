CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = ZadClassKcpp

SRC = main.cc \
      src/Zad11.cc \
      src/Zad13.cc \
      src/Zad22.cc \
      src/Zad47.cc \
      src/Zad411.cc \
      src/Zad412.cc \
      src/Zad413.cc \
      src/Zad414.cc \
      src/Zad415.cc \
      src/Zad56.cc

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)