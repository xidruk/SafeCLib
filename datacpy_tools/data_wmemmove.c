#include "../gdefs.h"


/*
 * data_wmemmove: Safely copies wide characters even when regions overlap
 * 
 * This function safely copies _n__ wide characters from _src__ to _dest__,
 * handling cases where the source and destination memory regions overlap.
 * 
 * Parameters:
 *   _dest__: Destination wide character array
 *   _src__: Source wide character array
 *   _n__: Number of wide characters to copy
 * 
 * Returns:
 *   Pointer to destination array, or NULL if parameters are invalid
 */
wchar_t *data_wmemmove(wchar_t *_dest__, const wchar_t *_src__, size_t _n__)
{
    if (!_dest__ || !_src__ || _n__ == 0)
        return (NULL);
    
    // Handle potential overlap by direction of copy
    if (_dest__ < _src__ || _dest__ >= _src__ + _n__)
    {
        // Forward copy (no overlap or dest before src)
        size_t _tracker__ = 0;
        while (_tracker__ < _n__)
        {
            _dest__[_tracker__] = _src__[_tracker__];
            _tracker__++;
        }
    }
    else
    {
        // Backward copy (for overlapping regions where dest > src)
        ssize_t _tracker__ = (ssize_t)_n__ - 1;
        while (_tracker__ >= 0)
        {
            _dest__[_tracker__] = _src__[_tracker__];
            _tracker__--;
        }
    }
    
    return (_dest__);
}
