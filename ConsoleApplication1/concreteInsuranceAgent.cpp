#include <iostream>
#include "ConcreteInsuranceAgent.h"
#include "Home.h"
#include "Bank.h"
#include "Factory.h"

using namespace std;

void ConcreteInsuranceAgent::visit(Home* home) {
    system("chcp 1251");

    cout << "���������� ����������� ��������� ��� ����\n";
}

void ConcreteInsuranceAgent::visit(Bank* bank) {
    cout << "���������� ��������� �� ������� ��� �����\n";
}

void ConcreteInsuranceAgent::visit(Factory* factory) {
    cout << "���������� ��������� �� ������ � ���������� ��� �������\n";
}
