CC=clang
CFLAGS=-g -Wall
OBJS=myqueue.o
BIN=queuetest

all:$(BIN)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN): queuetest.c $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@


clean:
	$(RM) -r $(OBJS) $(BIN) *.dSYM
