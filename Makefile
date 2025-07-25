CC = g++
CFLAGS = -Wall -std=c++11

OBJ = main.o ListaSequencial.o
TARGET = lista

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp ListaSequencial.h
	$(CC) $(CFLAGS) -c main.cpp

ListaSequencial.o: ListaSequencial.cpp ListaSequencial.h
	$(CC) $(CFLAGS) -c ListaSequencial.cpp

clean:
	rm -f *.o $(TARGET)
