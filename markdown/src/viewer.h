/*
 * viewer.h - Part of the Geany Markdown plugin
 *
 * Copyright 2012 Matthew Brush <mbrush@codebrainz.ca>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef MARKDOWN_VIEWER_H
#define MARKDOWN_VIEWER_H 1

G_BEGIN_DECLS

#include <gtk/gtk.h>
#include "tmpl.h"

typedef struct MarkdownViewer MarkdownViewer;

MarkdownViewer *markdown_viewer_new(GtkNotebook *notebook);
void markdown_viewer_free(MarkdownViewer *viewer);

GtkNotebook *markdown_viewer_get_notebook(MarkdownViewer *viewer);
void markdown_viewer_set_notebook(MarkdownViewer *viewer, GtkNotebook *nb);

MarkdownTemplate *markdown_viewer_get_template(MarkdownViewer *viewer);
void markdown_viewer_set_template(MarkdownViewer *viewer, MarkdownTemplate *tmpl);

void markdown_viewer_show(MarkdownViewer *viewer);
void markdown_viewer_hide(MarkdownViewer *viewer);

void markdown_viewer_update_content(MarkdownViewer *viewer, const gchar *text,
  const gchar *encoding);

G_END_DECLS

#endif /* MARKDOWN_VIEWER_H */
