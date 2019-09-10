#ifndef ZIP_COMPRESSOR_H
#define ZIP_COMPRESSOR_H

#include "compressor.h"

class ZIP_Compressor : public Compressor
{
public:
    ZIP_Compressor();
    void compress();
};

#endif // ZIP_COMPRESSOR_H
