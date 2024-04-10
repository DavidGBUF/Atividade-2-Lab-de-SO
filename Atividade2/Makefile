# Define o compilador C
CC = gcc

# Define as opções de compilação
CFLAGS = -Wall -std=c11

# Regra para compilar o hello.c
hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

# Regra para compilar o main.c
main: main.c
	$(CC) $(CFLAGS) -o main main.c

# Regra para executar o main
run: main
	./main

# Regra para limpar os arquivos executáveis
clean:
	rm -f hello main