# Nome do compilador
CC = gcc

# Flags do compilador (warnings, padrão C e otimização)
CFLAGS = -Wall -Wextra -std=c99 -O2

# Arquivos fonte
SRCS = main.c fila.c

# Arquivos objeto
OBJS = $(SRCS:.c=.o)

# Nome do executável final
TARGET = programa_fila

# Nome do arquivo de saída dos testes
OUTPUT_FILE = saida.txt

# Regra principal: compila tudo
all: $(TARGET)

# Regra para ligar os arquivos objeto e criar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regra para compilar cada arquivo .c em um arquivo .o
%.o: %.c fila.h
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar APENAS os arquivos compilados
clean:
	rm -f $(OBJS) $(TARGET)

# Regra para executar o programa no terminal
run: $(TARGET)
	./$(TARGET)

# Regra para executar o programa e salvar a saída em um arquivo txt
test: $(TARGET)
	./$(TARGET) > $(OUTPUT_FILE)

.PHONY: all clean run test