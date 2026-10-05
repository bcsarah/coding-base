CC      = gcc
CFLAGS  = -Wall -Wextra -g -Isrc

SRC     = src/main.c src/aux.c
OUT     = bin/main

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)

.PHONY: all clean
