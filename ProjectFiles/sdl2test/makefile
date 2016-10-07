CPP = g++
CFLAGS = -Wall -g -pedantic
LIBS = -lSDL2
TARGET = sdlWindow

SRC = $(wildcard ./*.cpp)
OBJ = $(patsubst ./%.cpp,./%.o, $(SRC))


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CPP) -o $@ $^ $(CFLAGS) $(LIBS)

%.o: %.cpp 
	$(CPP) $(CFLAGS) -c $< -o $@ $(LIBS)

%.o: %.cpp %.h 
	$(CPP) $(CFLAGS) -c $< -o $@ $(LIBS)

clean:
	rm -f *.o $(TARGET)
