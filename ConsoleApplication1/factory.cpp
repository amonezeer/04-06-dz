#include "Factory.h"

void Factory::accept(InsuranceAgent* agent) {
    agent->visit(this);
}
