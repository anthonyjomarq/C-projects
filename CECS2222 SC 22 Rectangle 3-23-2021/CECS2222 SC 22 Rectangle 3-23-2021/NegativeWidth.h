#ifndef NEGATIVEWIDTH_H
#define NEGATIVEWIDTH_H
#include <stdexcept>
#include <string>
class NegativeWidth
{
private:
	double value;
public:
	NegativeWidth(double val)
	{
		value = val;
	}
	double getValue() const
	{
		return value;
	}
};
#endif