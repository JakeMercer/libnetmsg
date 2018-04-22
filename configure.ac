AC_INIT([libnetmsg], [0.0.1], [jmercer04@qub.ac.uk], [libnetmsg.tar.gz])
AC_PREREQ([2.68])

# Put autotools auxiliary files in a subdir, so they don't clutter top dir.
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

# Check for documentation tools
AC_CHECK_PROGS([DOXYGEN], [doxygen])
if test -z "$DOXYGEN";
   then AC_MSG_WARN([Doxygen not found - continuing without Doxygen support])
fi

AM_CONDITIONAL([HAVE_DOXYGEN],
[test -n "$DOXYGEN"])AM_COND_IF([HAVE_DOXYGEN], [AC_CONFIG_FILES([doc/Doxyfile])])

# Enable "automake" to simplify creating makefiles. foreign relaxes some GNU
# checks. -Wall and -Werror are instructions to Automake, not gcc.
AM_INIT_AUTOMAKE([subdir-objects foreign -Wall -Werror])
AM_PROG_AR

# Enable libtool
LT_INIT

# These are the files to be generated.
AC_CONFIG_FILES([Makefile])

# Put configuration results in this file for us to #include in our program.
AC_CONFIG_HEADERS([config.h])

# Check for a C++ compiler.
AC_PROG_CXX

# Check for libraries, headers, data etc here.

# Last line: actually generate all required output files.
AC_OUTPUT

