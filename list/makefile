CC = clang
CFLAGS = -Wall -Wextra -Werror -Wpedantic
LIST_OBJS = listClient.o list.o

client: $(LIST_OBJS)
	$(CC) $(CFLAGS) -o client $(LIST_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f client *.o

leak_check:
	make
	valgrind --leak-check=full ./client

