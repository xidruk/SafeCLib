#include "../gdefs.h"

/*
 * find_blpos: Finds the last occurrence of a character in a string
 * 
 * This function searches for the last occurrence of a specified character
 * within a string and returns its position (index).
 * 
 * Parameters:
 *   _data__: String to search in
 *   _t_c__: Target character to find
 * 
 * Returns:
 *   Index of the last occurrence of the character, or 0 if:
 *   - The character is not found
 *   - Input string is NULL
 *   - The last occurrence is at position 0
 */
size_t find_blpos(const char *_data__, char _t_c__)
{
    if (!_data__)
        return (0);
    
    size_t _tracker__ = 0;
    size_t _last_pos__ = 0;
    int _found__ = 0;
    
    while (_data__[_tracker__])
    {
        if (_data__[_tracker__] == _t_c__)
        {
            _last_pos__ = _tracker__;
            _found__ = 1;
        }
        _tracker__++;
    }
    
    if (_found__)
        return (_last_pos__);
    return (0);
}