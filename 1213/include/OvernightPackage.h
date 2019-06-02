#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
using namespace std;

class OvernightPackage : public Package
{
    public:
        OvernightPackage( const string &, const string &, const string &,
            const string &, int, const string &, const string &, const string &,
            const string &, int, double, double, double );

        void setOvernightFeePerOunce( double );
        double getOvernightFeePerOunce() const;

        virtual double calculateCost() const;
    private:
        double overnightFeePerOunce;
};

#endif
