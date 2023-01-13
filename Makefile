# make file to use emcc to compile the C code to JavaScript
# emcc -o index.js src/index.c src/utilities.c -O3 -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"

C_FILES = $(wildcard src/*.c)

all: index.js

index.js: $(C_FILES)
	emcc -o public/index.js $(C_FILES) -O3 -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"