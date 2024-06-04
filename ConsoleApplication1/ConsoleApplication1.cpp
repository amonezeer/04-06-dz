#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Family;
class Bank;
class Factory;
class Office;

class Visitor {
public:
    virtual void visit(Family& family) = 0;
    virtual void visit(Bank& bank) = 0;
    virtual void visit(Factory& factory) = 0;
    virtual void visit(Office& office) = 0;
    virtual ~Visitor() = default;
};

class Organization {
public:
    virtual void accept(Visitor& visitor) = 0; 
    virtual ~Organization() = default;
};

class Family : public Organization {
public:
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
};

class Bank : public Organization {
public:
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
};

class Factory : public Organization {
public:
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
};
class Office : public Organization {
public:
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
};

class InsuranceAgent : public Visitor {
public:
    void visit(Family& family) override {
        cout << "Предлагаем медицинскую страховку для вашей семьи." << endl;
    }

    void visit(Bank& bank) override {
        cout << "Предлагаем страховку от грабежа для вашего банка." << endl;
    }

    void visit(Factory& factory) override {
        cout << "Предлагаем страховку предприятия от пожара и наводнения для вашей фабрики." << endl;
    }

    void visit(Office& office) override {
        cout << "Предлагаем страховку имущества для вашего офиса." << endl;
    }
};

class VisitManager {
public:
    void performVisits(InsuranceAgent& agent, vector<Organization*>& organizations) {
        for (auto& org : organizations) {
            org->accept(agent);
        }
    }
};

int main() {
    system("chcp 1251");
    Family family;
    Bank bank;
    Factory factory;
    Office office;


    vector<Organization*> organizations = { &family, &bank, &factory, &office };
    InsuranceAgent agent;
    VisitManager manager;

    manager.performVisits(agent, organizations);
    return 0;
}