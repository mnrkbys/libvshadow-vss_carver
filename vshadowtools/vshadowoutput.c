/*
 * Common output functions for the vshadowtools
 *
 * Copyright (C) 2011-2014, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <memory.h>
#include <types.h>

#include <libvshadow.h>

#include "vshadowoutput.h"
#include "vshadowtools_libbfio.h"
#include "vshadowtools_libcerror.h"
#include "vshadowtools_libclocale.h"
#include "vshadowtools_libcnotify.h"
#include "vshadowtools_libcstring.h"
#include "vshadowtools_libcsystem.h"
#include "vshadowtools_libfdatetime.h"
#include "vshadowtools_libfguid.h"
#include "vshadowtools_libuna.h"
#include "vshadowtools_libvshadow.h"

/* Prints the copyright information
 */
void vshadowoutput_copyright_fprint(
      FILE *stream )
{
	if( stream == NULL )
	{
		return;
	}
	/* TRANSLATORS: This is a proper name.
	 */
	fprintf(
	 stream,
	 _( "Copyright (C) 2011-2014, %s.\n" ),
	 _( "Joachim Metz" ) );

	fprintf(
	 stream,
	 _( "This is free software; see the source for copying conditions. There is NO\n"
	    "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n" ) );

	/* TRANSLATORS: The placeholder indicates the bug-reporting address
	 * for this package.  Please add _another line_ saying
	 * "Report translation bugs to <...>\n" with the address for translation
	 * bugs (typically your translation team's web or email address).
	 */
	fprintf(
	 stream,
	 _( "Report bugs to <%s>.\n" ),
	 PACKAGE_BUGREPORT );
}

/* Prints the version information
 */
void vshadowoutput_version_fprint(
      FILE *stream,
      const char *program )
{
	if( stream == NULL )
	{
		return;
	}
	if( program == NULL )
	{
		return;
	}
        fprintf(
	 stream,
	 "%s %s\n\n",
         program,
	 LIBVSHADOW_VERSION_STRING );
}

/* Prints the detailed version information
 */
void vshadowoutput_version_detailed_fprint(
      FILE *stream,
      const char *program )
{
	if( stream == NULL )
	{
		return;
	}
	if( program == NULL )
	{
		return;
	}
        fprintf(
	 stream,
	 "%s %s (libvshadow %s",
         program,
	 LIBVSHADOW_VERSION_STRING,
	 LIBVSHADOW_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcerror %s",
	 LIBCERROR_VERSION_STRING );

	fprintf(
	 stream,
	 ", libclocale %s",
	 LIBCLOCALE_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcnotify %s",
	 LIBCNOTIFY_VERSION_STRING );

	fprintf(
	 stream,
	 ", libuna %s",
	 LIBUNA_VERSION_STRING );

/* TODO
	fprintf(
	 stream,
	 ", libcfile %s",
	 LIBCFILE_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcpath %s",
	 LIBCPATH_VERSION_STRING );
*/

	fprintf(
	 stream,
	 ", libbfio %s",
	 LIBBFIO_VERSION_STRING );

	fprintf(
	 stream,
	 ", libfdatetime %s",
	 LIBFDATETIME_VERSION_STRING );

	fprintf(
	 stream,
	 ", libfguid %s",
	 LIBFGUID_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcsystem %s",
	 LIBCSYSTEM_VERSION_STRING );

        fprintf(
	 stream,
	 ")\n\n" );
}

