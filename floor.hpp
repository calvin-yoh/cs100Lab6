#ifndef __FLOOR__HPP__
#define __FLOOR__HPP__

#include "base.hpp"
#include "math.h"

class Floor : public Base{
	public:
        Base* composite;
        Floor(Base*composite)
        {
                this->composite = composite;
        }
        double evaluate() {return 0;};
        std::string stringify(){return "s";};
        int change();
	
};

#endif 
