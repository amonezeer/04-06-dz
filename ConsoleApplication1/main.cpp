#include "Home.h"
#include "Bank.h"
#include "Factory.h"
#include "ConcreteInsuranceAgent.h"

using namespace std;

int main() {

    Home home;
    Bank bank;
    Factory factory;

    ConcreteInsuranceAgent agent;

    home.accept(&agent);
    bank.accept(&agent);
    factory.accept(&agent);

    return 0;
}
