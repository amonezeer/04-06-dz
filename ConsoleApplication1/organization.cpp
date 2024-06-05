#include "ConcreteInsuranceAgent.h"
#include <iostream>
#include "Home.h"
#include "Bank.h"
#include "Factory.h"

using namespace std;

void ConcreteInsuranceAgent::visit(Home* home) {
    cout << "���������� ����������� ��������� ��� ����.\n";
}

void ConcreteInsuranceAgent::visit(Bank* bank) {
    cout << "���������� ��������� �� ������� ��� �����.\n";
}

void ConcreteInsuranceAgent::visit(Factory* factory) {
    cout << "���������� ��������� �� ������ � ���������� ��� �������.\n";
}
