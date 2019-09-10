#ifndef ZIP_COMPRESSOR_H
#define ZIP_COMPRESSOR_H

#include "compression.h"

class ZIP_Compressor : public Compression
{
public:
    ZIP_Compressor();
    void compress();
};

#endif // ZIP_COMPRESSOR_H
