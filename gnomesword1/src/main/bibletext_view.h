/*
 * GnomeSword Bible Study Tool
 * gs_viewtext.h - text view dialog glue
 *
 * Copyright (C) 2000,2001,2002 GnomeSword Developer Team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __GS_VIEWTEXT_H__
#define __GS_VIEWTEXT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <gnome.h>
	
const char *get_book_viewtext(void);	
int get_chapter_viewtext(void);
int get_verse_viewtext(void);
void goto_verse_viewtext(char * verse);
void load_module_viewtext(char * module_name);
void shutdown_viewtext(void);	
void set_global_options_viewtext(gchar *option, gboolean choice);
void setup_viewtext(GtkWidget * text);
	
#ifdef __cplusplus
}
#endif
#endif	/* __GS_VIEWTEXT_H__ */
