#include "../gdefs.h"

/**
 * mem_concat - Concatenates two memory blocks safely
 * _dst_mem__: Destination memory block
 * _src_mem__: Source memory block to append
 * _dst_size__: Size of destination buffer
 * _used_size__: Current used size in destination
 * _src_size__: Size of source data to append
 * 
 * Return: Total size after concatenation or -1 on error
 */
size_t mem_concat(void *_dst_mem__, const void *_src_mem__, size_t _dst_size__, size_t _used_size__, size_t _src_size__)
{
    if (!_dst_mem__ || !_src_mem__ || _dst_size__ == 0)
        return (-1);
    
    /* Check if there's enough space in destination */
    if (_used_size__ >= _dst_size__ || (_dst_size__ - _used_size__) < _src_size__)
        return (-1);
    
    /* Calculate destination pointer offset */
    unsigned char *_dst_ptr__ = (unsigned char *)_dst_mem__ + _used_size__;
    const unsigned char *_src_ptr__ = (const unsigned char *)_src_mem__;
    
    /* Copy source data to end of destination */
    size_t _tracker__ = 0;
    while (_tracker__ < _src_size__)
    {
        _dst_ptr__[_tracker__] = _src_ptr__[_tracker__];
        _tracker__++;
    }
    
    return (_used_size__ + _src_size__);
}
