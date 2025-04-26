#include "../gdefs.h"

/*
* tcut_sdata: Extracts a substring from a specific range
* 
* This function creates a new string by extracting characters from the source
* string between _start__ (inclusive) and _end__ (exclusive) positions.
* The resulting string is null-terminated.
* 
* Parameters:
*   _data__: Source string
*   _start__: Starting index (inclusive)
*   _end__: Ending index (exclusive)
* 
* Returns:
*   Pointer to newly allocated substring, or NULL if:
*   - Source string is NULL
*   - _end__ is less than _start__
*   - Memory allocation fails (implicit)
*/
char *tcut_sdata(const char *_data__, size_t _start__, size_t _end__)
{
   if (!_data__)
       return (NULL);

   ssize_t _d_Ln__ = _end__ - _start__;
   if (_d_Ln__ < 0)
       return (NULL);
   
   char *_new_data__ = malloc(_d_Ln__ + 1);
   size_t _tracker__ = 0;

   while (_start__ < _end__)
   {
       _new_data__[_tracker__] = _data__[_start__];
       _tracker__++;
       _start__++;
   }
   
   _new_data__[_tracker__] = '\0';

   return (_new_data__);
}