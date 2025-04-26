#include "../gdefs.h"

/*
 * mem_mth: Compares memory blocks for equality
 * 
 * This function compares two memory blocks byte by byte to determine
 * if they contain identical data for a specified length.
 * 
 * Parameters:
 *   _fs_data__: First memory block to compare
 *   _sc_data__: Second memory block to compare
 *   _dst__: Number of bytes to compare
 * 
 * Returns:
 *   0: Memory blocks are identical for the specified length
 *   -1: One or both inputs are NULL
 *   -2: Memory blocks differ in content
 *   -3: Size parameter is 0
 */
int mem_mth(const void *_fs_data__, const void *_sc_data__, size_t _dst__)
{
    if (_dst__ == 0)
        return (-3);
        
    if (!_fs_data__ || !_sc_data__)
        return (-1);
    
    const unsigned char *_f_ptr__ = (const unsigned char *)_fs_data__;
    const unsigned char *_s_ptr__ = (const unsigned char *)_sc_data__;
    size_t _tracker__ = 0;
    
    while (_tracker__ < _dst__)
    {
        if (_f_ptr__[_tracker__] != _s_ptr__[_tracker__])
            return (-2);
        
        _tracker__++;
    }
    
    return (0);
}