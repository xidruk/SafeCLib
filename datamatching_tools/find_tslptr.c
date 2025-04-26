#include "../gdefs.h"

/*
 * find_tslptr: Returns a pointer to the last occurrence of a character
 * 
 * This function searches for the last occurrence of a specified character
 * within a string and returns a pointer to that character's position.
 * 
 * Parameters:
 *   _data__: String to search in
 *   _t_c__: Target character to find
 * 
 * Returns:
 *   Pointer to the last occurrence of the character, or NULL if:
 *   - The character is not found
 *   - Input string is NULL
 */
char *find_tslptr(const char *_data__, char _t_c__)
{
    if (!_data__)
        return (NULL);

    char *_mem_T__ = (char *)_data__;
    char *_last_ptr__ = NULL;
    
    while (*_mem_T__)
    {
        if (*_mem_T__ == _t_c__)
            _last_ptr__ = _mem_T__;
        _mem_T__++;
    }
    
    return (_last_ptr__);
}