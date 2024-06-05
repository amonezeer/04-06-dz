#ifndef HOME_H
#define HOME_H

#include "Organization.h"

class Home : public Organization {
public:
    void accept(InsuranceAgent* agent) override;
};

#endif 
