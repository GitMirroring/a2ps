/* lexps.h - a simple lexer for PostScript
   Copyright 1988-2017 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see
   <https://www.gnu.org/licenses/gpl-3.0.html>.  */

#ifndef LEXPS_H_
# define LEXPS_H_

/* Dump the file FILENAME on STREAM, while inserting the special
   pagedevice requests of JOB. */

void pslex_dump (FILE *stream, const char *filename);

#endif
