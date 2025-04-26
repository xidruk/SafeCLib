CC = gcc
CFLAGS = -Wall -Wextra -fPIC -g -O2

SRC_DIRS = dataconcat_tools datadup_tools datacpy_tools datamatching_tools get_size
OBJ_DIR = obj
LIB_DIR = lib

SRC_FILES = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
OBJ_FILES = $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRC_FILES)))

STATIC_LIB = $(LIB_DIR)/libsafeclib.a
SHARED_LIB = $(LIB_DIR)/libsafeclib.so

all: directories $(STATIC_LIB) $(SHARED_LIB)

directories:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(LIB_DIR)

$(OBJ_DIR)/%.o: */%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(STATIC_LIB): $(OBJ_FILES)
	ar rcs $@ $^

$(SHARED_LIB): $(OBJ_FILES)
	$(CC) -shared -o $@ $^

clean:
	rm -rf $(OBJ_DIR) $(LIB_DIR)

install: all
	mkdir -p /usr/local/lib
	mkdir -p /usr/local/include/safeclib
	cp $(LIB_DIR)/* /usr/local/lib/
	cp *.h /usr/local/include/safeclib/
	ldconfig

.PHONY: all clean directories install