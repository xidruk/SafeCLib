#include "../gdefs.h"

/*
* rev_data_ndup: Creates a reversed copy of arbitrary data
* 
* This function allocates memory and creates a reversed copy of the input data.
* The reverse operation works on byte level, where the last byte becomes first.
* 
* Parameters:
*   _data__: Source data to duplicate in reverse
*   _n__: Size of data in bytes (must be > 0)
* 
* Returns:
*   Pointer to newly allocated reversed data, or NULL if:
*   - Source data is NULL
*   - _n__ is less than or equal to 0
*   - Memory allocation fails
* 
* Note: There appears to be a potential off-by-one error in this function,
* as it accesses _n__ when _n__ is 0 in the first loop iteration.
*/
void *rev_data_ndup(void *_data__, ssize_t _n__)
{
   if (!_data__ || _n__ <= 0)
       return (NULL);

   unsigned char *_me_tracker__ = (unsigned char *)_data__;
   ssize_t _tracker__ = 0;
   unsigned char *_n_data__ = malloc(_n__);

   if (!_n_data__)
       return (NULL);
   
   while (_n__ > -1)
   {
       _n_data__[_tracker__] = _me_tracker__[_n__];
       _tracker__++;
       _n__--;
   }
   
   return ((void *)_n_data__);
}