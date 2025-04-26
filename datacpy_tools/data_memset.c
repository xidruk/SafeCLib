#include "../gdefs.h"


/*
 * data_memset: Fills a block of memory with a specific byte value
 * 
 * This function sets _n__ bytes of memory starting at _mem__ to the 
 * specified byte value _c__. This is useful for initializing or clearing 
 * memory regions.
 * 
 * Parameters:
 *   _mem__: Memory block to fill
 *   _c__: Byte value to fill memory with (gets converted to unsigned char)
 *   _n__: Number of bytes to fill
 * 
 * Returns:
 *   Pointer to filled memory block, or NULL if parameters are invalid
 */
void *data_memset(void *_mem__, int _c__, size_t _n__)
{
    if (!_mem__ || _n__ == 0)
        return (NULL);
    
    unsigned char *_mem_tracker__ = (unsigned char *)_mem__;
    unsigned char _byte_val__ = (unsigned char)_c__;
    size_t _tracker__ = 0;
    
    while (_tracker__ < _n__)
    {
        _mem_tracker__[_tracker__] = _byte_val__;
        _tracker__++;
    }
    
    return (_mem__);
}

