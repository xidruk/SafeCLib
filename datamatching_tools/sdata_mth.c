#include "../gdefs.h"

/*
 * sdata_mth: Compares two strings for equality
 * 
 * This function compares two strings character by character to determine
 * if they are identical. Unlike standard strcmp, this returns specific
 * error codes for different conditions.
 * 
 * Parameters:
 *   _f_data__: First string to compare
 *   _sc_data__: Second string to compare
 * 
 * Returns:
 *   0: Strings are identical
 *   -1: One or both inputs are NULL
 *   -2: Strings differ in content or length
 */
int sdata_mth(const char *_f_data__, const char *_sc_data__)
{
    if (!_f_data__ || !_sc_data__)
        return (-1);
    
    size_t _tracker__ = 0;
    
    while (_f_data__[_tracker__] && _sc_data__[_tracker__])
    {
        if (_f_data__[_tracker__] != _sc_data__[_tracker__])
            return (-2);
        
        _tracker__++;
    }
    
    if (_f_data__[_tracker__] == _sc_data__[_tracker__])
        return (0);
    else
        return (-2);
}