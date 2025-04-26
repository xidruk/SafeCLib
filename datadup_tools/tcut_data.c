#include "../gdefs.h"

/*
* tcut_data: Extracts a portion of arbitrary data from a specific range
* 
* This function allocates memory and copies data from the source between
* _start__ (inclusive) and _end__ (exclusive) byte positions.
* 
* Parameters:
*   _data__: Source data
*   _start__: Starting byte index (inclusive)
*   _end__: Ending byte index (exclusive)
* 
* Returns:
*   Pointer to newly allocated data portion, or NULL if:
*   - Source data is NULL
*   - _end__ is less than _start__
*   - Memory allocation fails
*/
void *tcut_data(const void *_data__, size_t _start__, size_t _end__)
{
   if (!_data__)
       return (NULL);

   ssize_t _d_Ln__ = _end__ - _start__;
   if (_d_Ln__ < 0)
       return (NULL);
   
   unsigned char *_new_data__ = malloc(_d_Ln__);
   if (!_new_data__)
       return (NULL);
   
   const unsigned char *_data_bytes__ = (const unsigned char *)_data__;
   size_t _tracker__ = 0;

   while (_start__ < _end__)
   {
       _new_data__[_tracker__] = _data_bytes__[_start__];
       _tracker__++;
       _start__++;
   }

   return (void *)_new_data__;
}