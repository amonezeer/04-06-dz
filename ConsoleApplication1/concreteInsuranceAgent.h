#ifndef CONCRETE_INSURANCE_AGENT_H
#define CONCRETE_INSURANCE_AGENT_H

#include "InsuranceAgent.h"

class ConcreteInsuranceAgent : public InsuranceAgent {
public:
    void visit(Home* home) override;
    void visit(Bank* bank) override;
    void visit(Factory* factory) override;
};

#endif 

