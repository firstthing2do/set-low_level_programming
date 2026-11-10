# 0x00. C - Hello, World

## Description

This project introduces the basics of C programming and the compilation process.

### Task 0: Preprocessor

The `0-preprocessor` script runs a C source file through the C preprocessor using GCC.

The C file is specified through the `CFILE` environment variable, and the preprocessed output is saved in a file named `c`.

### Usage

1. Set the C file name:

   `export CFILE=main.c`

2. Execute the script:

   `./0-preprocessor`

3. The preprocessed output will be saved in the file `c`.

### Task 1: Compiler

The `1-compiler` script compiles a C source file into an object file without linking.

The source filename is obtained from the `CFILE` environment variable. The resulting object file has the same filename as the source file but uses the `.o` extension.

### Usage

1. Set the C file name:

   `export CFILE=main.c`

2. Execute the script:

   `./1-compiler`

3. The compiled object file will be saved as `main.o`.
