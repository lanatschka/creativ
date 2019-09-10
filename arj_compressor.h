#ifndef ARJ_COMPRESSOR_H
#define ARJ_COMPRESSOR_H

#include "compression.h"

class ARJ_Compressor : public Compression
{
public:
    ARJ_Compressor();
    void compress();
};

#endif // ARJ_COMPRESSOR_H
