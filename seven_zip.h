#ifndef SEVEN_ZIP_H
#define SEVEN_ZIP_H
# include "compression.h"

class seven_zip : public Compression
{
public:
    seven_zip();
    void compress();
};

#endif // SEVEN_ZIP_H
