#include "../gdefs.h"

/*
 * find_tsptr: Returns a pointer to the first occurrence of a character
 * 
 * This function searches for the first occurrence of a specified character
 * within a string and returns a pointer to that character's position.
 * 
 * Parameters:
 *   _data__: String to search in
 *   _t_c__: Target character to find
 * 
 * Returns:
 *   Pointer to the first occurrence of the character, or NULL if:
 *   - The character is not found
 *   - Input string is NULL
 */
char *find_tsptr(const char *_data__, char _t_c__)
{
    if (!_data__)
        return (NULL);

    char *_mem_T__ = (char *)_data__;
    
    while (*_mem_T__)
    {
        if (*_mem_T__ == _t_c__)
            return (_mem_T__);
        _mem_T__++;
    }
    return (NULL);
}