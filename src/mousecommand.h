/////////////////////////////////////////////////////////////////////////////
// Name:        mousecommand.h
// Purpose:     mouse command definitions
// Modified by: sticky drag patch
/////////////////////////////////////////////////////////////////////////////
#ifndef MOUSECOMMAND_H
#define MOUSECOMMAND_H

namespace mousecmd {
	enum mousecmd {
		CMD_NO_CLICK = 0,
		CMD_LEFT_CLICK,
		CMD_MIDDLE_CLICK,
		CMD_RIGHT_CLICK,
		CMD_LEFT_DOWN,
		CMD_LEFT_UP,
		CMD_DOUBLE_CLICK,
		// Sticky drag: button held while moving, released when stopped
		CMD_LEFT_STICKY_DRAG,   // Activate/deactivate left sticky drag
		CMD_RIGHT_STICKY_DRAG,  // Activate/deactivate right sticky drag
		CMD_RIGHT_DOWN,
		CMD_RIGHT_UP
	};
};

#endif // MOUSECOMMAND_H
