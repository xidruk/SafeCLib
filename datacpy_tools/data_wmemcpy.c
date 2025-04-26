#include "../gdefs.h"

/*
 * data_wmemcpy: Copies a block of wide characters (wchar_t)
 * 
 * This function copies _n__ wide characters from _src__ to _dest__.
 * It does not handle overlapping memory regions safely (use data_wmemmove for that).
 * 
 * Parameters:
 *   _dest__: Destination wide character array
 *   _src__: Source wide character array
 *   _n__: Number of wide characters to copy
 * 
 * Returns:
 *   Pointer to destination array, or NULL if parameters are invalid
 */
wchar_t *data_wmemcpy(wchar_t *_dest__, const wchar_t *_src__, size_t _n__)
{
    if (!_dest__ || !_src__ || _n__ == 0)
        return (NULL);
    
    size_t _tracker__ = 0;
    
    while (_tracker__ < _n__)
    {
        _dest__[_tracker__] = _src__[_tracker__];
        _tracker__++;
    }
    
    return (_dest__);
}

