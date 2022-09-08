//
// Created by Administrator on 2022/9/5.
//

#ifndef CLION_BASEPLUSCOMMISSIONEMPLOYEE_H
#define CLION_BASEPLUSCOMMISSIONEMPLOYEE_H
#include <iostream>
#include "CommissionEmployee.h"
class BasePlusCommissionEmployee: public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const std::string &, const std::string &,
            const std::string &, double=0.0,  double=0.0,  double=0.0);
    void setBaseSalary(double);
    double getBaseSalary() const;
    double earnings() const;
    void print() const;

private:
    double baseSalary;

};


#endif //CLION_BASEPLUSCOMMISSIONEMPLOYEE_H
