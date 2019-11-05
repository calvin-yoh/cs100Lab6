#include "floor.hpp"

int Floor::change(){
	return floor(this->composite->evaluate());
}
