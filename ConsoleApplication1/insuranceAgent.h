#ifndef INSURANCE_AGENT_H
#define INSURANCE_AGENT_H

class Home;
class Bank;
class Factory;

class InsuranceAgent {
public:
    virtual void visit(Home* home) = 0;
    virtual void visit(Bank* bank) = 0;
    virtual void visit(Factory* factory) = 0;
    virtual ~InsuranceAgent() = default;
};

#endif 
