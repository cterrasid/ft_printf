/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:45:56 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/13 02:04:30 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/**
* @brief Transform the first numeric characters of a string 'nptr' in numbers.
*/
int		ft_atoi(const char *nptr);

/**
* @brief Erase 'n' bytes of the memory area 'mem', by replacing it
* with zeros ('\0').
* @param mem Pointer to the memory area to erase.
* @param n Bytes to be erased in 'mem'.
* @returns Nothing.
*/
void	ft_bzero(void *mem, size_t n);

/**
* @brief Allocates memory for an array of 'count' elements (with 'size'
* bytes each).
* Every position of memory is set to zero ('0').
* @param count Number of elements of the array to allocate.
* @param size Size in bytes of each element to allocate.
* @returns Pointer to the allocated memory.
*/
void	*ft_calloc(size_t count, size_t size);

/**
* @brief Checks whether the argument passed is an alphanumeric character or not.
*/
int		ft_isalnum(int c);

/**
* @brief Checks whether the argument passed is an alphabetic character or not.
*/
int		ft_isalpha(int c);

/**
* @brief Checks whether the argument passed can be represented as a valid ASCII
* character.
*/
int		ft_isascii(int c);

/**
* @brief Checks whether the argument passed is an numeric character or not.
*/
int		ft_isdigit(int c);

/**
* @brief Takes an lowercase alphabet and convert it to an uppercase character.
*/
int		ft_toupper(int c);

/**
* @brief Takes an uppercase alphabet and convert it to a lowercase character.
*/
int		ft_tolower(int c);

/**
* @brief Checks whether the argument passed is a printable character or not.
*/
int		ft_isprint(int c);

/**
* @brief Compare the first 'n' bytes of the memory areas 's1' and 's2'.
* @returns an int lower than 0, if 'n' bytes of 's1' are lower
* than 'n' bytes of 's2'.
* @returns an int bigger than 0, if 'n' bytes of 's1' are bigger
* than 'n' bytes of 's2'.
* @returns an int equal to 0, if 'n' is equal to zero
* or if 's1' and 's2' are equal.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
* @brief Find the first occurrence of 'ch' in the first 'n' bytes
* of the memory area pointed by 'str'.
* @param str The memory area to find the first occurence of 'ch'.
* @param ch The character to find in the first 'n' bytes of 'str'.
* @param n The first bytes of 'str' to find 'ch'.
*/
void	*ft_memchr(const void *str, int ch, size_t n);

/**
* @brief Copies 'n' bytes of the memory area pointed by 'src',
* to the memory area pointed by 'dest'.
* @param dst Memory area where will be copied 'n' bytes of 'src'.
* @param src Memory area from where will be copied 'n' bytes
* to 'dst'.
* @param n Bytes of 'src' which will be copied to 'dst'.
* @returns Pointer to 'dst'.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
* @brief Copies 'n' bytes of the memory area pointed by 'src',
* to the memory area pointed by 'dest'. Allows overlapping.
* @param dst Memory area where will be copied 'len' bytes of 'src'.
* @param src Memory area from where will be copied 'len' bytes
* to 'dst'.
* @param len Bytes of 'src' which will be copied to 'dst'.
* @returns Pointer to 'dst'.
*/
void	*ft_memmove(void *dest, const void *src, size_t len);

/**
* @brief Fills the first 'n' bytes of 'str' with 'ch'.
* @param str The string to replace with 'ch'.
* @param ch The character to fill 'n' bytes of 'str'.
* @param n The bytes of 'str' to replace with 'ch'.
* @returns Nothing.
*/
void	*ft_memset(void *str, int ch, size_t n);

/**
* @brief Loops through the string 'str' to find the first occurrence of 'ch'.
* @param str The string to find 'ch'.
* @param ch The character to find in 'str'.
* @returns Pointer to the first occurence of 'ch' in 'str'.
*/
char	*ft_strchr(const char *str, int ch);

/**
* @brief Duplicates the string 's'. The memory obtained
* is done dynamically using malloc().
* @returns Pointer to a null-terminated byte string, which is a duplicate
* of the string pointed by 's'.
*/
char	*ft_strdup(const char *s);

/**
* @brief Locates the first occurrence of 'needle' in the first 'len' bytes of
* 'haystack'.
* @param haystack String where the 'needle' will be searched.
* @param needle String to find in the 'haystack'.
* @param max_len Maximum length of the 'haystack' to search the 'needle'.
* @returns If 'needle' is empty, returns the 'haystack'.
* - If 'needle' has been found in 'haystack', returns a pointer to
* the first coincidence of 'needle' in 'haystack'.
* - If 'needle' hasn't beeen found in 'haystack', returns NULL.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t max_len);

/**
* @brief Loops through the string 'str' to find the	last occurrence of 'ch'.
* @param str The string where should be found the last occurrence of 'ch'.
* @param ch The character to find in 'str'.
* @returns Pointer to the character 'ch'.
*/
char	*ft_strrchr(const char *str, int ch);

/**
* @brief Compares at most the first 'n' bytes of 's1' and 's2'.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
* @brief Calculates the length of a given string 's'.
*/
size_t	ft_strlen(const char *s);

/**
* @brief Copies a string 'src' to a destination buffer 'dst'.
* @param dst The string where will be copied 'size - 1' bytes of 'src'.
* @param src The string to copy in 'dst'.
* @param size The bytes of 'src' to copy in 'dst', including the NUL.
* @returns The length of 'src'.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
* @brief Appends at most 'size - strlen(dst) - 1' bytes of 'src' to 'dst'.
* @param dst The destination buffer.
* @param src The string to append to 'dst'.
* @param dstsize The size of the final string, including the NUL.
* @returns The combined length of 'src' and 'dst' (not counting their
* terminating null characters).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
* @brief Allocates memory with malloc(), to return a new string based on 's'.
* The new string begins at 'start' and has a max length of 'len'.
* @param str The reference string to form the substring.
* @param start The index of 'str' from which the substring will be created.
* @param max_len The maximum length of the substring.
* @returns Pointer to the obtained substring.
*/
char	*ft_substr(const char *str, unsigned int start, size_t max_len);

/**
* @brief Allocates memory with malloc() to create a new string,
* based on the join	of 's1' and 's2'.
* @param s1	The prefix string.
* @param s2	The sufix string.
* @returns Pointer to the string created from the join of 's1' and 's2'.
*/
char	*ft_strjoin(const char *s1, const char *s2);

/**
* @brief Allocates memory with malloc(), to return a copy of 's1' with the
* characters of 'set', removed from the beginning and the end.
* @param s1 String to trim, according to 'set'.
* @param set Set of characters to remove from the beggining
* and the end of 's1'.
* @returns Pointer to the trimmed string.
*/
char	*ft_strtrim(const char *s1, const char *set);

/**
* @brief Split a string 's' into parts, according to a delimiter 'c'.
* @param s String to split.
* @param c Delimiter.
* @returns Pointer to an array of splitted words.
*/
char	**ft_split(const char *s, char c);

/**
* @brief Allocates memory with malloc() and transform a number 'n' into a string.
* @returns The number 'n' as a string.
*/
char	*ft_itoa(int n);

/**
* @brief Applies the function 'func' to each character of 'str',
* to create a new string.
* @param str The string to loop.
* @param func The function to apply to each character of 'str'.
* @returns The result string with the 'func' applied to all its characters.
*/
char	*ft_strmapi(const char *str, char (*func)(unsigned int, char));

/**
* @brief Applies the function 'f' to each character of 's'. The first
* argument of 'f', is the index of each character of 's'.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
* @brief Send the character 'c' to the given 'fd' (file descriptor).
*/
void	ft_putchar_fd(char c, int fd);

/**
* @brief Writes 's' in the given 'fd' (file descriptor).
*/
void	ft_putstr_fd(char *s, int fd);

/**
* @brief Writes 's' in the given 'fd' (file descriptor), followed by a linebreak.
*/
void	ft_putendl_fd(char *s, int fd);

/**
* @brief Writes 'n' in the given 'fd' (file descriptor).
*/
void	ft_putnbr_fd(int n, int fd);

/* ----- */
/* BONUS */
/* ----- */

/**
* @brief Type definition for s_list.
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
* @brief Reserve memory with malloc() nd return a new element.
* The new element's content is initialized with the parameter 'content'.
* @param content The content to fill the new node's content.
* @returns A pointer to the new element.
*/
t_list	*ft_lstnew(void *content);

/**
* @brief Add the element 'new' to the beginning of the list.
* @param lst The address to the pointer to the beginning of the list.
* @param new A pointer to the new node to add in the front of the list.
* @returns Nothing.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
* @brief Counts the number of elements in a list.
*/
int		ft_lstsize(t_list *lst);

/**
* @brief Find the last element of a list.
* @returns A pointer to the last element of a list.
*/
t_list	*ft_lstlast(t_list *lst);

/**
* @brief Add the element 'new' to the end of the list.
* @param lst The address to the pointer to the beginning of the list.
* @param new A pointer to the new node to add in the end of the list.
* @returns Nothing.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
* @brief Takes an element as a parameter and frees the memory of the element's
* content using the function 'del' (given as parameter).
* Finally, frees the memory of the element.
* The memory of 'next' must not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
* @brief Removes and free each element of the given list,
* using the 'del' function and free().
* Finally, the pointer to the list must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
* @brief Loops the 'lst' list and apply the function 'f'
* to the content of each element.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
* @brief Creates a copy of a list 'lst' and applies the function 'f' to the
* content of each element of the copy.
* The 'del' function will remove the content of an element if needed.
* @returns A pointer to the beginning of the new list (the copy of 'lst').
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif /* LIBFT_H */