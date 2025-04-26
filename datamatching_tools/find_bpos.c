#include "../gdefs.h"

/*
 * find_bpos: Finds the first occurrence of a character in a string
 * 
 * This function searches for the first occurrence of a specified character
 * within a string and returns its position (index).
 * 
 * Parameters:
 *   _data__: String to search in
 *   _t_c__: Target character to find
 * 
 * Returns:
 *   Index of the first occurrence of the character, or 0 if:
 *   - The character is not found
 *   - Input string is NULL
 *   - The character is at position 0
 */
size_t find_bpos(const char *_data__, char _t_c__)
{
    if (!_data__)
        return (0);
    
    size_t _tracker__ = 0;
    while (_data__[_tracker__])
    {
        if (_data__[_tracker__] == _t_c__)
            return (_tracker__);

        _tracker__++;
    }
    return (0);
}