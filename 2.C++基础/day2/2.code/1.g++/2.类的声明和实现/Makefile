TARGET:=main.bin
OBJ  :=./obj
BIN  :=./bin
SRC  :=./src
SOURCE	 := $(wildcard $(SRC)/*.cpp) 
OBJS := $(patsubst %.c, $(OBJ)/%.o, $(SOURCE))


CC:=g++
CFLAGS:=-Wall -g
INCLUDE:=-Iinclude

.PHONY :all clean CHEKDIR
all: CHEKDIR $(TARGET)
	@echo "SUCCEED"

CHEKDIR:
	@-mkdir $(BIN) $(OBJ)

$(TARGET):$(OBJS)
	$(CC) $(OBJS) $(INCLUDE) -o $(BIN)/$@

$(OBJS):$(SOURCE)
	$(CC) -c $^ $(INCLUDE) -o $@

clean:
	@-rm -rf $(BIN) $(OBJ)
