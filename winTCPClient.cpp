#include <windows.h>
#include "Chat1.h"

DLG_MAIN DIALOG 6, 18, 289, 303
STYLE DS_MODALFRAME | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
CAPTION "ChatMate"
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
FONT 8, "MS Sans Serif"
{
	CONTROL "Sent and Received Data", 0, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 3, 1, 283, 202
		CONTROL "", ID_EDIT_DATA, "EDIT", ES_LEFT | ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 9, 12, 271, 185
		CONTROL "", ID_EDIT_SEND, "EDIT", ES_LEFT | ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 3, 207, 282, 59
		CONTROL "&Send", ID_BTN_SEND, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 225, 270, 60, 14
		CONTROL " C&onnect...", ID_BTN_CONNECT, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 162, 270, 60, 14
		CONTROL "&Clear", ID_BTN_CLEAR, "BUTTON", 0x50010000, 35, 270, 60, 14
		CONTROL "&Listen...", ID_BTN_LISTEN, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 99, 270, 60, 14
		CONTROL "", ID_STATUS_MAIN, "msctls_statusbar32", SBARS_SIZEGRIP | WS_CHILD | WS_VISIBLE, 179, 302, 60, 12
}

DLG_CONNECT DIALOG 100, 100, 291, 83
STYLE DS_MODALFRAME | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
CAPTION "Connect to Remote Computer..."
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
FONT 8, "MS Sans Serif"
{
	CONTROL "", 0, "BUTTON", 0x50000007, 3, 1, 284, 79
		CONTROL "127.0.0.1", ID_EDIT_HOST, "EDIT", 0x50810000, 69, 28, 145, 14
		CONTROL "IP or Hostname:", 0, "STATIC", 0x50020000, 9, 34, 53, 10
		CONTROL "Port Number:", 0, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 10, 49, 50, 10
		CONTROL "23", ID_EDIT_PORT, "EDIT", ES_LEFT | ES_NUMBER | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 69, 45, 60, 14
		CONTROL "&Go", ID_BTN_GO, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 220, 29, 60, 14
}

DLG_LISTEN DIALOG 100, 100, 291, 83
STYLE DS_MODALFRAME | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
CAPTION "Listen on Port (Act as Server)..."
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
FONT 8, "MS Sans Serif"
{
	CONTROL "", 0, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 2, 0, 288, 81
		CONTROL "Port Number:", 0, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 21, 40, 53, 9
		CONTROL "", ID_EDIT_PORT, "EDIT", ES_LEFT | ES_NUMBER | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 77, 36, 138, 14
		CONTROL "&Go", ID_BTN_GO, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 222, 35, 60, 14
}
