#include "../gdefs.h"

/*
 * data_memcpy: Copies a block of memory from source to destination
 * 
 * This function copies _n__ bytes from _src__ to _dest__. It does not handle
 * overlapping memory regions safely (use data_memmove for that).
 * 
 * Parameters:
 *   _dest__: Destination memory block where data will be copied to
 *   _src__: Source memory block to copy from
 *   _n__: Number of bytes to copy
 * 
 * Returns:
 *   Pointer to destination memory block, or NULL if parameters are invalid
 */
void *data_memcpy(void *_dest__, const void *_src__, size_t _n__)
{
    if (!_dest__ || !_src__ || _n__ == 0)
        return (NULL);
    
    unsigned char *_dest_tracker__ = (unsigned char *)_dest__;
    const unsigned char *_src_tracker__ = (const unsigned char *)_src__;
    size_t _tracker__ = 0;

    while (_tracker__ < _n__)
    {
        _dest_tracker__[_tracker__] = _src_tracker__[_tracker__];
        _tracker__++;
    }
    
    return (_dest__);
}
