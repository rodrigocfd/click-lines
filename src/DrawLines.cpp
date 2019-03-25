
#include "../winlamb/device_context.h"
#include "DrawLines.h"

DrawLines::DrawLines()
{
	setup.wndClassEx.lpszClassName = L"DRAW_LINES_CLASS_NAME";
	setup.exStyle |= wl::wsx::CLIENTEDGE;

	on_message(WM_LBUTTONDOWN, [&](wl::wm::lbuttondown p) -> LRESULT
	{
		dots.emplace_back(p.pos());
		InvalidateRect(hwnd(), nullptr, TRUE);
		return 0;
	});

	on_message(WM_PAINT, [&](wl::wm::paint p) -> LRESULT
	{
		wl::device_context_simple dc{this};
		POINT prevDot{0, 0};

		for (const POINT& dot : dots) {
			dc.move_to(prevDot);
			dc.line_to(dot);
			prevDot = dot;
		}

		return 0;
	});
}
