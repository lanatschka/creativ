#ifndef RAR_COMPRESSOR_H
#define RAR_COMPRESSOR_H

#include "compressor.h"

class RAR_Compressor : public Compressor
{
public:
    RAR_Compressor();
    void compress();
};

#endif // RAR_COMPRESSOR_H
