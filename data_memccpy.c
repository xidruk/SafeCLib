#include "../gdefs.h"

/*
 * data_memccpy: Copies memory until a specific character is found
 * 
 * This function copies no more than _n__ bytes from _src__ to _dest__, stopping
 * when the character _c__ is found. If _c__ is found, the function returns a pointer 
 * to the byte after where _c__ was copied in the destination. Otherwise, it returns NULL.
 * 
 * Parameters:
 *   _dest__: Destination memory block
 *   _src__: Source memory block
 *   _c__: Character to stop copying at (gets converted to unsigned char)
 *   _n__: Maximum number of bytes to copy
 * 
 * Returns:
 *   Pointer to byte after the found character in destination, or NULL if character 
 *   wasn't found within _n__ bytes or if parameters are invalid
 */
void *data_memccpy(void *_dest__, const void *_src__, int _c__, size_t _n__)
{
    if (!_dest__ || !_src__ || _n__ == 0)
        return (NULL);
    
    unsigned char *_dest_tracker__ = (unsigned char *)_dest__;
    const unsigned char *_src_tracker__ = (const unsigned char *)_src__;
    unsigned char _stop_char__ = (unsigned char)_c__;
    size_t _tracker__ = 0;
    
    while (_tracker__ < _n__)
    {
        _dest_tracker__[_tracker__] = _src_tracker__[_tracker__];
        
        if (_src_tracker__[_tracker__] == _stop_char__)
            return (&_dest_tracker__[_tracker__ + 1]);
        
        _tracker__++;
    }
    
    return (NULL);
}
