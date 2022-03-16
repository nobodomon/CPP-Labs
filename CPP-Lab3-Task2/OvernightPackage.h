#pragma once

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"

class OvernightPackage : public Package
{
private:
    double overnightFeePerKg;
public:
    OvernightPackage(const string&, const string&, const string&,
        const string&, int, const string&, const string&, const string&,
        const string&, int, double, double, double);

    void setOvernightFeePerKg(double);
    double getOvernightFeePerKg() const;

    double calculateCost() const;
};

#endif
