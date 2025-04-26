#include "../gdefs.h"

/*
 * data_strncpy: Copies a string with a size limit
 * 
 * This function copies at most _n__ characters from source string to destination.
 * If the source string is shorter than _n__, the destination is padded with null
 * bytes until _n__ characters total have been written.
 * 
 * Note: This function may not null-terminate the string if the source string
 * is longer than _n__ characters. Always manually terminate strings if needed.
 * 
 * Parameters:
 *   _dest__: Destination string buffer
 *   _src__: Source string to copy
 *   _n__: Maximum number of characters to copy
 * 
 * Returns:
 *   Pointer to destination string, or NULL if parameters are invalid
 */
char *data_strncpy(char *_dest__, const char *_src__, size_t _n__)
{
    if (!_dest__ || !_src__ || _n__ == 0)
        return (NULL);
    
    size_t _tracker__ = 0;
    
    // Copy characters from src to dest, up to n
    while (_tracker__ < _n__ && _src__[_tracker__] != '\0')
    {
        _dest__[_tracker__] = _src__[_tracker__];
        _tracker__++;
    }
    
    // Pad with null bytes if necessary
    while (_tracker__ < _n__)
    {
        _dest__[_tracker__] = '\0';
        _tracker__++;
    }
    
    return (_dest__);
}
