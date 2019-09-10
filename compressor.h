#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include <iostream>

class Compressor
{
public:
    Compressor();
    ~Compressor();
    virtual void compress() = 0;
};

#endif // COMPRESSOR_H
