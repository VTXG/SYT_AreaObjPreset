#pragma once
#include "syati.h"

class SYT_ClassName : public AreaObj {
public:
    SYT_ClassName(const char*);

    virtual void init(const JMapInfoIter &rIter);
    virtual void movement();
    virtual const char* getManagerName() const;
};