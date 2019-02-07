
#include "MainWindow.h"

RUN(MainWindow)

MainWindow::MainWindow()
{
	setup.wndClassEx.lpszClassName = L"MAIN_WINDOW_CLASS_NAME";
	setup.title = L"Click lines";
	setup.style |= wl::ws::MINIMIZEBOX | wl::ws::MAXIMIZEBOX | wl::ws::SIZEBOX;
	setup.size = {600, 400};

	on_message(WM_CREATE, [&](wl::wm::create p)->LRESULT
	{
		drawLines.create(this, 0x100, {10, 10}, {560, 340});
		resizer.add(drawLines, wl::resizer::go::RESIZE, wl::resizer::go::RESIZE);
		return 0;
	});

	on_message(WM_SIZE, [&](wl::wm::size p)->LRESULT
	{
		resizer.adjust(p);
		return 0;
	});
}
