#include "editor.h"

void Editor::sendHandleUserEvent()
{


	while (u_events.size())
	{
		UEvent* ue = u_events.front();
		u_events.pop_back();

		if (ue->common.caller == WINDOW && ue->common.action == WINDOW_MOUSEMOTION)
		{
			if (ue->common.win_id == WINDOW_ONE)
				window_two->handleUserEvents(ue);
			else if (ue->common.win_id == WINDOW_TWO)
				window_one->handleUserEvents(ue);

			update();

			continue;
		}

		if (ue->common.win_id == WINDOW_ONE)
			window_one->handleUserEvents(ue);
		else if (ue->common.win_id == WINDOW_TWO)
			window_two->handleUserEvents(ue);


	}


}