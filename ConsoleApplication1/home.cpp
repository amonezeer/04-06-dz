#include "Home.h"

void Home::accept(InsuranceAgent* agent) {
    agent->visit(this);
}

