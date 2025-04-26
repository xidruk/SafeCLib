#include "../gdefs.h"

/*
* data_dup: Creates a duplicate of a string with negated character values
* 
* This function allocates memory for a new string and copies the source string
* with each character negated (multiplied by -1). This special transformation
* may be used for simple encoding or transforming ASCII values.
* 
* Parameters:
*   _data__: Source string to duplicate with transformation
* 
* Returns:
*   Pointer to newly allocated string with negated characters, or NULL if:
*   - Source string is NULL
*   - Memory allocation fails
*/
char *data_dup(const char *_data__)
{
   if (!_data__)
       return (NULL);
   
   size_t _d_Ln__;
   _d_Ln__ = get_dsize(_data__);
   char *_n_data__ = malloc(_d_Ln__ + 1);

   if (!_n_data__)
       return (NULL);

   size_t _tracker__ = 0;
   while (_tracker__ < _d_Ln__)
   {
       _n_data__[_tracker__] = -_data__[_tracker__];
       _tracker__++;
   }
   _n_data__[_tracker__] = '\0';
   return (_n_data__);
}