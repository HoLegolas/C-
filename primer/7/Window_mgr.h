#include <iostream>
#include "Screen.h"

class Window_mgr
{
private:
	std::vector<Screen> screens{Screen(24, 80, ' ' )};
};
