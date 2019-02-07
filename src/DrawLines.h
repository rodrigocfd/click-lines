
#include "../winlamb/window_control.h"

class DrawLines : public wl::window_control {
private:
	std::vector<POINT> dots;

public:
	DrawLines();
};
