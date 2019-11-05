#ifndef __EVALUATEDECOR_HPP__
#define __EVALUATEDECOR_HPP__

#include "base.hpp"
#include "op.hpp"
#include "math.h"

class EvaluateDecor : public Base
{
	Base* decorator;
	virtual int change(Base* composite) = 0
};

#endif
