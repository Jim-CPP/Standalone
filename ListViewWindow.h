// ListViewWindow.h

#pragma once

#include <windows.h>
#include <commctrl.h>

#include "Ascii.h"
#include "Common.h"

#define LIST_VIEW_WINDOW_CLASS_NAME												WC_LISTVIEW

#define LIST_VIEW_WINDOW_EXTENDED_STYLE											LVS_EX_FULLROWSELECT
#define LIST_VIEW_WINDOW_TEXT													NULL
#define LIST_VIEW_WINDOW_STYLE													( WS_CHILD | WS_VISIBLE | LVS_REPORT )

#define LIST_VIEW_WINDOW_DEFAULT_COLUMN_WIDTH									100

#define LIST_VIEW_WINDOW_POPULATE_STATUS_MESSAGE_FORMAT_STRING					"%d items"

#define LIST_VIEW_WINDOW_COLUMN_TITLES											{ "First", "Second" }

typedef enum
{
	LIST_VIEW_WINDOW_FIRST_COLUMN_ID = 0,
	LIST_VIEW_WINDOW_SECOND_COLUMN_ID,

	LIST_VIEW_WINDOW_NUMBER_OF_COLUMNS

} LIST_VIEW_WINDOW_COLUMNS;

int ListViewWindowAddItem( LPCTSTR lpszItemText );

BOOL ListViewWindowCreate( HWND hWndParent, HINSTANCE hInstance, HFONT hFont );

BOOL ListViewWindowGetItemText( int nWhichItem, int nWhichColumn, LPTSTR lpszItemText );

BOOL ListViewWindowMove( int nLeft, int nTop, int nWidth, int nHeight, BOOL bRepaint );

int ListViewWindowPopulate();

BOOL ListViewWindowSetItemText( int nWhichItem, int nWhichColumn, LPCTSTR lpszItemText );
