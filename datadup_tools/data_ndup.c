#include "../gdefs.h"

/*
* data_ndup: Creates an exact duplicate of arbitrary data
* 
* This function allocates memory and creates an exact copy of the input data
* for the specified number of bytes. Works for any data type by treating
* the data as a sequence of bytes.
* 
* Parameters:
*   _data__: Source data to duplicate
*   _n__: Size of data in bytes
* 
* Returns:
*   Pointer to newly allocated copy of data, or NULL if:
*   - Source data is NULL
*   - _n__ is 0
*   - Memory allocation fails
*/
void *data_ndup(void *_data__, size_t _n__)
{
   if (!_data__ || _n__ == 0)
       return (NULL);
   
   unsigned char *_me_tracker__ = (unsigned char *)_data__;
   size_t _tracker__ = 0;
   unsigned char *_n_data__ = malloc(_n__);

   if (!_n_data__)
       return (NULL);

   while (_tracker__ < _n__)
   {
       _n_data__[_tracker__] = _me_tracker__[_tracker__];
       _tracker__++;
   }
   return ((void *)_n_data__);
}