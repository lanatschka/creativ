#ifndef ARJ_COMPRESSOR_H
#define ARJ_COMPRESSOR_H

#include "compressor.h"

class ARJ_Compressor : public Compressor
{
public:
    ARJ_Compressor();
    void compress();
};

#endif // ARJ_COMPRESSOR_H
