CC=clang
CFLAGS=-Wall -Werror -g
OUT=xcb
SOURCES=$(wildcard *.c)
HEADERS=$(wildcard *.h)
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))
LIBS=xcb


all: $(OUT)


r: run
run: $(OUT)
	./$(OUT)


d: dbg
dbg: $(OUT)
	gdb --silent $(OUT)


$(OUT): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(OUT) $(OBJECTS) -l $(LIBS)


main.o: main.c $(HEADERS)
	$(CC) $(CFLAGS) -c main.c


%.o: %.c 
	$(CC) $(CFLAGS) -c $^


c: clean
clean:
	rm *.o $(OUT)


v: vars
vars:
	@echo "CC     : "$(CC)
	@echo "CFLAGS : "$(CFLAGS)
	@echo "OUT    : "$(OUT)
	@echo "SOURCES: "$(SOURCES)
	@echo "HEADERS: "$(HEADERS)
	@echo "OBJECTS: "$(OBJECTS)
	@echo "LIBS   : "$(LIBS)


h: help
help:
	@echo "make help (this list)"
	@echo "make vars"
	@echo "make clean"
	@echo "make all"
	@echo "make run"
	@echo "make dbg"


