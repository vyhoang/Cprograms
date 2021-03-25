// Tips.h is the Tips class specification file.

#ifndef TIPS_H
#define TIPS_H
// Tips class declaration
class Tips {
private:
    double taxRate;

public:
    Tips(double);			// Constructor
    Tips();					// Default Constructor
    double computeTip(double, double) const;	// accept two arguments: totalBill & tipRate

};
#endif