```sh title="Various options"
--8<-- "includes/gcc/gcc-cstd.sh"

--8<-- "includes/gcc/gcc-wall.sh"

--8<-- "includes/gcc/gcc-ncurses.sh"

--8<-- "includes/gcc/gcc-pthread.sh"

# Output extra information for use by a debugger with -g
gcc -g

# Skip linking entirely with -c
gcc -c

# Stop compilation after preprocessing
gcc -E infile.c -o outfile.cpp
```

<div class="grid cards" markdown>

-   #### pkg-config

    ---

    **pkg-config** returns directory names, which **gcc** uses to ensure all header files are available.

    Here, pkg-config appends options to the command-line used by the linker including library directory path extensions and a list of libraries needed for linking to the executable.

    ```sh
    --8<-- "includes/gcc/gcc-gtk.sh"
    ```

-   #### Invoking GCC step by step

    ---

    ```c
    --8<-- "src/LPBE/009.c"
    ```

    ```sh
    # Preprocessing only
    gcc -E file.c -o file.cpp

    # Compile preprocessed code to object code
    gcc -x cpp-output -c file.cpp -o file.o
    ```

    **Linking** is performed by the separate linker program **ld**, but is normally invoked indirectly by gcc to ensure the correct options and libraries are used.

    ```sh
    # Link the object file
    gcc file.o -o file.out
    ```

-   #### Optimization

    ---

    gcc has three optimization levels

    -   `-01` or `-0` reduces code size and execution time.
        The optimizations performed include at least **thread jumps** (1) and **deferred stack pops** (2).
        {: .annotate }

        1. **Thread jump** optimizations attempt to reduce the number of jump operations.
        2. **Deferred stack pops** occur when the compiler allows arguments to accumulate on the stack as functions return and then pops them simultaneously, rather than popping them piecemeal.

    -   `-02` includes additional tweaks that involve process instruction scheduling and compensation for data latency, caused by fetching data from cache or main memory.

    -   `-03` includes loop unrolling and other processor-specific features.

    `-fflag` options can request specific optimizations:
    
    -   `-ffastmath` generates floating-point math optimizations that increase speed but violate IEEE and/or ANSI standards
    -   `-finline-functions` expands all simple functions in place similar to preprocess macro replacements
    -   `-funroll-loops` instructs the compiler to unroll all loops with a fixed number of iterations (at compile-time) and turn each interation into a statement.

-   #### C versions

    ---

    A specific C version can be specified to the compiler with **-std**

    ```sh
    --8<-- "includes/gcc/gcc-cstd.sh"
    ```

</div>
