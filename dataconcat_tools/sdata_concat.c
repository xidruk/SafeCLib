#include "../gdefs.h"

/**
 * sdata_concat - Concatenates two strings safely
 * _dst_data__: Destination string (must be large enough)
 * _src_data__: Source string to append
 * _max_size__: Maximum size of destination buffer
 * 
 * Return: Total length of concatenated string or -1 on error
 */
size_t sdata_concat(char *_dst_data__, const char *_src_data__, size_t _max_size__)
{
    if (!_dst_data__ || !_src_data__ || _max_size__ == 0)
        return (-1);
    
    size_t _dst_len__ = 0;
    size_t _src_len__ = 0;
    
    /* Find length of destination string */
    while (_dst_data__[_dst_len__] && _dst_len__ < _max_size__)
        _dst_len__++;
    
    /* Check if destination buffer is already full */
    if (_dst_len__ >= _max_size__ - 1)
        return (-1);
    
    /* Calculate remaining space in destination */
    size_t _remain__ = _max_size__ - _dst_len__ - 1;
    
    /* Copy source string to end of destination */
    while (_src_data__[_src_len__] && _src_len__ < _remain__)
    {
        _dst_data__[_dst_len__ + _src_len__] = _src_data__[_src_len__];
        _src_len__++;
    }
    
    /* Ensure null termination */
    _dst_data__[_dst_len__ + _src_len__] = '\0';
    
    return (_dst_len__ + _src_len__);
}