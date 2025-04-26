#include "../gdefs.h"

/**
 * sdata_dup_concat - Creates a new string by concatenating two strings
 * _first_str__: First string
 * _second_str__: Second string
 * 
 * Return: Newly allocated concatenated string or NULL on error
 */
char *sdata_dup_concat(const char *_first_str__, const char *_second_str__)
{
    if (!_first_str__ || !_second_str__)
        return (NULL);
    
    size_t _first_len__ = 0;
    size_t _second_len__ = 0;
    
    /* Calculate lengths of both strings */
    while (_first_str__[_first_len__])
        _first_len__++;
    
    while (_second_str__[_second_len__])
        _second_len__++;
    
    /* Allocate memory for new concatenated string */
    char *_new_str__ = (char *)malloc(_first_len__ + _second_len__ + 1);
    if (!_new_str__)
        return (NULL);
    
    /* Copy first string */
    size_t _tracker__ = 0;
    while (_tracker__ < _first_len__)
    {
        _new_str__[_tracker__] = _first_str__[_tracker__];
        _tracker__++;
    }
    
    /* Copy second string */
    size_t _second_idx__ = 0;
    while (_second_idx__ < _second_len__)
    {
        _new_str__[_tracker__ + _second_idx__] = _second_str__[_second_idx__];
        _second_idx__++;
    }
    
    /* Add null terminator */
    _new_str__[_tracker__ + _second_idx__] = '\0';
    
    return (_new_str__);
}