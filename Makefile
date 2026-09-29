TARGET = program.exe
SRCS = main.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -g -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /f /q $(OBJS) $(TARGET)