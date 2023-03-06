## 0x07. C - Even more pointers, arrays and strings

- Task0: Write a function that fills memory with a constant byte
- Task1: Write a function that copies memory area.
Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
- Task2: Write a function that locates a character in a string.
Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
- Task3: Write a function that gets the length of a prefix substring.
Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
