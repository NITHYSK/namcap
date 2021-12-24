CC	= gcc
CFLAGS	= --std=c11
SRCS	= $(wildcard ./*.c)
OBJS	= $(SRCS:.c=.o)
TARGET	= namcap.out

$(TARGET)	: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(TARGET)

$(OBJS) : stdafx.h

test	: $(TARGET)
	./$(TARGET)

clean	:
	rm ./*.o ./$(TARGET)

.PHONY	: test clean


