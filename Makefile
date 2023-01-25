TARGET_EXEC := main

CC=gcc
CFLAGS=-O3

MY_SOURCES = main.c
MY_OBJS = $(patsubst %.c,%.o, $(MY_SOURCES))

all: $(TARGET_EXEC)

%o: %.c
	$(CC) $(CFLAGS) -c $<

$(TARGET_EXEC): $(MY_OBJS)
	$(CC) $(CFLAGS) $^ -o $@

