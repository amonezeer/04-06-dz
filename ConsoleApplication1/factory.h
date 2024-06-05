#ifndef FACTORY_H
#define FACTORY_H

#include "Organization.h"

class Factory : public Organization {
public:
    void accept(InsuranceAgent* agent) override;
};

#endif 
