#ifndef __CEILING_HPP__
#define __CEILING_HPP__

#include "base.hpp"
#include "op.hpp"
#include "math.h"
class Ceiling : public Base
{	
	public: 
	Base* composite;
	Ceiling(Base*composite)
	{
		this->composite = composite;	
	}
	double evaluate() {return 0;};
	std::string stringify(){return "s";};
	int change();
};

#endif
