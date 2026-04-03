# libft

A custom C standard-library implementation from the 42 curriculum, packaged as a static library (`libft.a`).

This project provides:

- Core character, string, memory, and conversion utilities.
- File-descriptor output helpers.
- Bonus singly linked-list helpers (`t_list`).

## Project Layout

```text
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── ft_lst*_bonus.c
```

## Build

Build the main library:

```bash
make
```

Build bonus objects and append them to the library:

```bash
make bonus
```

Clean objects:

```bash
make clean
```

Clean everything (objects + `libft.a`):

```bash
make fclean
```

Rebuild from scratch:

```bash
make re
```

## Output

After `make`, you get:

- `libft.a` — static archive containing the compiled functions.

## How to Use

### 1) Include the header

```c
#include "libft.h"
```

### 2) Build with your project

```bash
cc -Wall -Wextra -Werror main.c libft.a -o app
```

Or link from parent directory:

```bash
cc -Wall -Wextra -Werror main.c -L./libft -lft -I./libft -o app
```

## API Overview

### Part 1 — libc-like and utility functions

### Character checks / transforms

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### String functions

- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Memory functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Conversions

- `ft_atoi`
- `ft_itoa`

### File-descriptor output

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Bonus — linked list (`t_list`)

Defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;
```

Implemented helpers:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`

## Notes specific to this repository

- `ft_lstmap_bonus.c` exists but currently contains only a declaration (no function body).
- `Makefile` bonus sources (`BSRC`) currently do not include `ft_lstmap_bonus`.
- `libft.h` currently does not expose a `ft_lstmap` prototype.

So in its current state, `ft_lstmap` is not part of the usable API.

## Minimal Example

```c
#include "libft.h"
#include <unistd.h>

int main(void)
{
	char **parts = ft_split("42-libft-project", '-');
	if (parts)
	{
		ft_putendl_fd(parts[0], 1); // 42
		ft_putendl_fd(parts[1], 1); // libft
		ft_putendl_fd(parts[2], 1); // project
	}
	return (0);
}
```

Compile example:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o demo
```
