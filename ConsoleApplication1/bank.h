#ifndef BANK_H
#define BANK_H

#include "Organization.h"

class Bank : public Organization {
public:
    void accept(InsuranceAgent* agent) override;
};

#endif 


