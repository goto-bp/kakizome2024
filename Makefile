CPP := g++

TARGET := kakizome2024

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
LIBS := 

CFLAGS := -Wall -O2 -std=c++11

.PHONY: all

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $^ $(LIBS)

install : $(TARGET)
	cp $(TARGET) /usr/local/bin

uninstall :
	rm -f /usr/local/bin/$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)