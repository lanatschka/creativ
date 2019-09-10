#ifndef RAR_COMPRESSOR_H
#define RAR_COMPRESSOR_H

#include "compression.h"

class RAR_Compressor : public Compression
{
public:
    RAR_Compressor();
    void compress();
};

#endif // RAR_COMPRESSOR_H
