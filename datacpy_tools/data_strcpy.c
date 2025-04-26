#include "../gdefs.h"

/*
 * data_strcpy: Copies a null-terminated string
 * 
 * This function copies characters from source string to destination
 * including the terminating null character. The destination string must 
 * be large enough to receive the copy.
 * 
 * Parameters:
 *   _dest__: Destination string buffer
 *   _src__: Source string to copy
 * 
 * Returns:
 *   Pointer to destination string, or NULL if parameters are invalid
 */
char *data_strcpy(char *_dest__, const char *_src__)
{
    if (!_dest__ || !_src__)
        return (NULL);
    
    size_t _tracker__ = 0;
    
    while (_src__[_tracker__] != '\0')
    {
        _dest__[_tracker__] = _src__[_tracker__];
        _tracker__++;
    }
    
    _dest__[_tracker__] = '\0';
    return (_dest__);
}

