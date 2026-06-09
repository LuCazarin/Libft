*This project has been created as part of the 42 curriculum by luafranc.*

## Description
The **Libft** project is the first milestone in the 42 curriculum. Its main goal is to create a robust, custom C static library (`libft.a`) containing reimplementations of standard libc functions, as well as additional utility functions. Since the use of standard functions is strictly forbidden in most future 42 projects, this library will serve as a foundational tool for all subsequent assignments, providing essential capabilities for string manipulation, memory management, and linked list operations.

## Detailed Description of the Library
The library is divided into three main components:

*   **Part 1 - Libc Functions:** Custom implementations of standard C library functions. These functions share the same prototypes and behaviors as the originals, but are prefixed with `ft_`.
    *   *Character classification & conversion:* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
    *   *String manipulation:* `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`.
    *   *Memory manipulation:* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
    *   *Functions using malloc:* `ft_calloc`, `ft_strdup`.
    *   *Conversion:* `ft_atoi`.

*   **Part 2 - Additional Functions:** Utility functions that are either not included in the standard libc or are provided in a different form.
    *   *String operations:* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
    *   *Conversion:* `ft_itoa`.
    *   *File Descriptor outputs:* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

*   **Part 3 - Linked List Functions (Bonus):** Functions designed to create and manipulate linked lists using the `t_list` structure.
    *   *List operations:* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Instructions
To compile and use this library, follow these steps:

1.  **Compilation:**
    Run `make` at the root of the repository. This will compile all mandatory `.c` files using `cc` with the flags `-Wall -Wextra -Werror` and create the `libft.a` static library.
    To include the linked list functions, compile using:
    `make bonus`
    
    *Other available rules:*
    *   `make clean`: Removes the `.o` object files.
    *   `make fclean`: Removes the `.o` object files and the `libft.a` binary.
    *   `make re`: Performs an `fclean` and recompiles the library.

2.  **Usage:**
    Include the header in your C files:
    `#include "libft.h"`
    
    When compiling your project, link the library by adding its path:
    `cc your_program.c -L. -lft`

## Resources
*   **Documentation:** Official Unix Manual pages (e.g., `man 3 memcpy`, `man 3 isprint`).
*   **Books:** *Think Like A Programmer* by V. Anton Spraul (for logic and problem-solving strategies) and *The Programmer's Brain* by Felienne Hermans (for code cognition and structuring).
*   **Standards:** 42 School Norm documentation.
*   **AI Usage:** Artificial Intelligence (LLMs) was used strictly as a pedagogical assistant, in accordance with the 42 AI guidelines. AI was utilized to debate logic, perform "desk tests" (Testes de Mesa), explain complex concepts such as double pointers (`char **`) and memory allocation layers in `ft_split`, clarify the difference between `size_t` and `int`, and help structure code planning without generating raw copy-paste solutions.

