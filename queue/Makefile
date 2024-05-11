CC = clang
CFLAGS = -Wall -Wextra -Werror -Wpedantic
OBJ_FILES = queueClient.o queue.o

client: $(OBJ_FILES)
	$(CC) -o client $(OBJ_FILES)

%.o: %.c
	$(CC) -c $<

clean:
	rm -f client *.o