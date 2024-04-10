# Define o compilador C
CC = gcc

# Define as opções de compilação
CFLAGS = -Wall -std=c11

# Regra para compilar o hello.c
hello:
	$(CC) $(CFLAGS) -o hello hello.c

# Regra para compilar o main.c
main:
	$(CC) $(CFLAGS) -o main main.c

# Regra para executar o main
run:
	./main

# Regra para limpar os arquivos executáveis
clean:
	rm -f hello main

# Regra para forçar a recompilação de todos os arquivos
all: clean hello main run