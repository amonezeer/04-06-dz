#include <iostream>
#include "ConcreteInsuranceAgent.h"
#include "Home.h"
#include "Bank.h"
#include "Factory.h"

using namespace std;

void ConcreteInsuranceAgent::visit(Home* home) {
    system("chcp 1251");

    cout << "ѕредлагаем медицинскую страховку дл€ дома\n";
}

void ConcreteInsuranceAgent::visit(Bank* bank) {
    cout << "ѕредлагаем страховку от грабежа дл€ банка\n";
}

void ConcreteInsuranceAgent::visit(Factory* factory) {
    cout << "ѕредлагаем страховку от пожара и наводнени€ дл€ фабрики\n";
}
