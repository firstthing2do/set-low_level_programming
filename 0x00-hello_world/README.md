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

### Task 2: Assembly

The `2-assembler` script generates assembly code from a C source file using GCC.

The source filename is obtained from the `CFILE` environment variable. The generated assembly code is saved in a file with the same name as the source file but with the `.s` extension.

### Usage

1. Set the C file name:

   `export CFILE=main.c`

2. Execute the script:

   `./2-assembler`

3. The generated assembly code will be saved as `main.s`.

### Task 3: Name

The `3-name` script compiles a C source file and creates an executable named `cisfun`.

The source filename is obtained from the `CFILE` environment variable. GCC performs preprocessing, compilation, assembly, and linking to produce the executable.

### Usage

1. Set the C file name:

   `export CFILE=main.c`

2. Execute the script:

   `./3-name`

3. The resulting executable will be named `cisfun`.

4. Run the executable:

   `./cisfun`

### Task 4: Hello, puts

The `4-puts.c` program prints the message `"Programming is like building a multilingual puzzle` using the `puts()` function.

It does not use `printf()` and returns 0 after successful execution.

**Compilation and execution:**

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c
./a.out
```

### Task 5: Hello, printf

The `5-printf.c` program prints the message `with proper grammar, but the outcome is a piece of art,` using the `printf()` function.

It does not use `puts()` and returns 0 after successful execution.

**Compilation and execution:**

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
./a.out
```

### Task 6: Size is Not Grandeur, and Territory Does Not Make a Nation

The `6-size.c` program uses the `sizeof` operator to display the memory sizes of five C data types: `char`, `int`, `long int`, `long long int`, and `float`.

The program returns 0 after execution.

**Compilation and execution:**

```bash
gcc 6-size.c -m32 -o size32
gcc 6-size.c -m64 -o size64
./size32
./size64
```