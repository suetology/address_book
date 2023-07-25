CPPFLAGS = -I../lib
LDFLAGS:= -llist -L../lib
DEPS = $(wildcard *.h)
SOURCE = $(wildcard *.c)
OBJ = $(SOURCE:.c=.o)

BIN:= address_book

.PHONY: all clean

all: $(BIN)

%.o: %.c $(DEPS)
	$(CC) -c $< $(CPPFLAGS) -o $@

$(BIN): $(OBJ)
	$(CC) $^ $(LDFLAGS) -o $@

clean:
	$(RM) $(BIN) $(OBJ)

