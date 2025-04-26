#include "../gdefs.h"

/*
* rev_data_dup: Creates a reversed copy of a string
* 
* This function allocates memory for a new string and copies the source string
* in reverse order (last character becomes first, etc). The resulting string
* is null-terminated.
* 
* Parameters:
*   _data__: Source string to duplicate in reverse
* 
* Returns:
*   Pointer to newly allocated reversed string, or NULL if:
*   - Source string is NULL
*   - Memory allocation fails
*/
char *rev_data_dup(const char *_data__)
{
   if (!_data__)
       return (NULL);

   ssize_t _tracker__ = 0;
   ssize_t _d_Ln__ = (ssize_t)get_dsize(_data__);
   char *_n_data__ = malloc(_d_Ln__ + 1);

   if (!_n_data__)
       return (NULL);
   
   _n_data__[_d_Ln__] = '\0';
   _d_Ln__--;

   while (_d_Ln__ > -1)
   {
       _n_data__[_tracker__] = _data__[_d_Ln__]; 
       _d_Ln__--;
       _tracker__++;
   }

   return (_n_data__);
}