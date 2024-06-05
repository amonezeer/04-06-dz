#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include "InsuranceAgent.h"

class Organization {
public:
    virtual void accept(InsuranceAgent* agent) = 0;
    virtual ~Organization() = default;
};

#endif 


