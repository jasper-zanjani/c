# System programming

#### Process attributes

<div class="grid cards" markdown>

-   Processes have attributes or characteristics that identify them and define their behavior.

    - PID (process ID)
    - PPID (parent process ID)


```c
--8<-- "src/LPBE/063.c"
```
</div>

<div class="grid cards" markdown>

-   Other attributes include:

    - Real user ID
    - Effective user ID
    - Real group ID
    - Effective group ID

```c
--8<-- "src/LPBE/065.c"
```

</div>

<div class="grid cards" markdown>

-   Two additional functions allow retrieval of the names associated with UIDs:

    ```c
    #include <unistd.h>
    char *getlogin(void);

    #include <pwd.h>
    struct passwd *getpswnam(const char *name);
    ```

```c
--8<-- "src/LPBE/067.c"
```

