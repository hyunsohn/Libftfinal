CC = gcc
SRC = $(wildcard ft*.c)
OBJ = $(SRC:.c=.o)

libft.a: $(OBJ)
	ar rc libft.a $(OBJ)

clean:
	-rm *.o

fclean: clean
	-rm libft.a
	-rm libft.so

all: libft.a so

re: fclean all

so:
	$(CC) -c -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
