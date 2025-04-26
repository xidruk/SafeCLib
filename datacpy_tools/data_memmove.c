#include "../gdefs.h"

/*
 * data_memmove: Safely copies memory even when source and destination overlap
 * 
 * Unlike data_memcpy, this function handles overlapping memory regions by
 * determining which direction to copy (forward or backward) to avoid corruption.
 * 
 * Parameters:
 *   _dest__: Destination memory block where data will be copied to
 *   _src__: Source memory block to copy from
 *   _n__: Number of bytes to copy
 * 
 * Returns:
 *   Pointer to destination memory block, or NULL if parameters are invalid
 */
void *data_memmove(void *_dest__, const void *_src__, size_t _n__)
{
    if (!_dest__ || !_src__ || _n__ == 0)
        return (NULL);
    
    unsigned char *_dest_tracker__ = (unsigned char *)_dest__;
    const unsigned char *_src_tracker__ = (const unsigned char *)_src__;
    
    // For overlapping regions, direction matters:
    // - If dest is before src or they don't overlap: copy forward
    // - If dest is after src and they overlap: copy backward (right to left)
    if (_dest_tracker__ < _src_tracker__ || _dest_tracker__ >= _src_tracker__ + _n__)
    {
        // Forward copy (no overlap or dest before src)
        size_t _tracker__ = 0;
        while (_tracker__ < _n__)
        {
            _dest_tracker__[_tracker__] = _src_tracker__[_tracker__];
            _tracker__++;
        }
    }
    else
    {
        // Backward copy (for overlapping regions where dest > src)
        ssize_t _tracker__ = (ssize_t)_n__ - 1;
        while (_tracker__ >= 0)
        {
            _dest_tracker__[_tracker__] = _src_tracker__[_tracker__];
            _tracker__--;
        }
    }
    
    return (_dest__);
}

