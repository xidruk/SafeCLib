#include "../gdefs.h"

size_t get_dsize(const char *_data__)
{
    if (!_data__)
        return (0);

    size_t _Ln__ = 0;
    while (_data__[_Ln__])
    {
        _Ln__++;
    }
    return (_Ln__);
}
