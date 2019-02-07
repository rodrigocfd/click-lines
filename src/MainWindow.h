
#include "../winlamb/window_main.h"
#include "../winlamb/resizer.h"
#include "DrawLines.h"

class MainWindow : public wl::window_main {
private:
	DrawLines drawLines;
	wl::resizer resizer;

public:
	MainWindow();
};
