#include "../gdefs.h"

/*
* zuth_dup: Extracts a substring from a specified position to the end
* 
* This function creates a new string by extracting characters from the source
* string starting at position _n__ and continuing to the end of the string.
* The resulting string is null-terminated.
* 
* Parameters:
*   _data__: Source string
*   _n__: Starting position for extraction
* 
* Returns:
*   Pointer to newly allocated substring, or NULL if:
*   - Source string is NULL
*   - _n__ is 0
*   - Memory allocation fails
* 
* Note: If _n__ is greater than the string length, it will be adjusted
* to the string length, resulting in an empty string.
*/
char *zuth_dup(const char *_data__, size_t _n__)
{
   if (!_data__ || _n__ == 0)
       return (NULL);

   size_t _d_Ln__ = get_dsize(_data__);

   if (_n__ > _d_Ln__)
       _n__ = _d_Ln__;
   
   _n__++;
   char *_new_data__ = malloc(_d_Ln__ - _n__ + 1);
   if (!_new_data__)
       return (NULL);
   
   size_t _tracker__ = 0;
   while (_n__ < _d_Ln__)
   {
       _new_data__[_tracker__] = _data__[_n__];
       _n__++;
       _tracker__++;
   }
   
   _new_data__[_tracker__] = '\0';
   return (_new_data__);
}