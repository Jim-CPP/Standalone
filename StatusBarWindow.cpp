// StatusBarWindow.cpp

#include "StatusBarWindow.h"

// Global variables
HWND g_hWndStatusBar;

BOOL StatusBarWindowCreate( HWND hWndParent, HINSTANCE hInstance, HFONT hFont )
{
	BOOL bResult = FALSE;

	// Create status bar window
	g_hWndStatusBar = CreateWindowEx( STATUS_BAR_WINDOW_EXTENDED_STYLE, STATUSCLASSNAME, STATUS_BAR_WINDOW_TEXT, STATUS_BAR_WINDOW_STYLE, 0, 0, 0, 0, hWndParent, ( HMENU )NULL, hInstance, NULL );

	// Ensure that status bar window was created
	if( g_hWndStatusBar )
	{
		// Successfully created status bar window

		// Set status bar window font
		SendMessage( g_hWndStatusBar, WM_SETFONT, ( WPARAM )hFont, ( LPARAM )TRUE );

		// Update return value
		bResult = TRUE;

	} // End of successfully created status bar window

	return bResult;

} // End of function StatusBarWindowCreate

BOOL StatusBarWindowSetText( LPCTSTR lpszStatusText )
{
	// Set status bar window text
	return SendMessage( g_hWndStatusBar, SB_SETTEXT, ( WPARAM )SBT_NOBORDERS, ( LPARAM )lpszStatusText );

} // End of function StatusBarWindowSetText

LRESULT StatusBarWindowSize()
{
	// Size status bar window
	return SendMessage( g_hWndStatusBar, WM_SIZE, ( WPARAM )NULL, ( LPARAM )NULL );

} // End of function StatusBarWindowSize
