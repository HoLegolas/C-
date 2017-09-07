#include <iostream>
#include "Screen.h"
#include <vector>

class Window_mgr
{
public:
	// location ID for each screen on the window
	using ScreenIndex = std::vector<Screen>::size_type;
	// reset the Screen at the given position to all blanks
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens{Screen(24, 80, 'A' )};
};

