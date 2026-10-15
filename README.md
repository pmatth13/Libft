*This project has been created as part of the 42 curriculum by psaudell.*

# libft

## Description

My own C library. It recodes some functions of the libc and adds a few
other useful ones. It will be reused in the next 42 projects.

## Instructions

### Compilation

Run `make` at the root of the repository. It compiles the sources with
`cc -Wall -Wextra -Werror` and creates the static library `libft.a`.

- `make` : builds `libft.a`
- `make clean` : removes the object files
- `make fclean` : removes the object files and `libft.a`
- `make re` : rebuilds everything

### Usage

Include `libft.h` in your code, then link the library when compiling:

```
cc main.c -I. -L. -lft -o my_program
./my_program
```

## Resources

- man pages of the libc functions
- some youtube video
- github repositories
- peers at 42

AI was used to explain some concepts or test, not to write the code.
