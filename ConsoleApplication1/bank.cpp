#include "Bank.h"

void Bank::accept(InsuranceAgent* agent) {
    agent->visit(this);
}

