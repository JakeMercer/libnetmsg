AM_CPPFLAGS = -I$(top_srcdir)/include

lib_LTLIBRARIES = libfoo.la
libfoo_la_SOURCES = source/foo.cpp

include_HEADERS = include/foo.hpp

TESTS = testA
testA_SOURCES = test/test.cpp
testA_LDADD = libfoo.la

noinst_PROGRAMS = testA

if HAVE_DOXYGEN
directory = $(top_srcdir)/doc/man/man3/

dist_man_MANS = $(directory)/man_page_1.3 $(directory)/man_page_2.3
$(directory)/man_page_1.3: doxyfile.stamp
$(directory)/man_page_2.3: doxyfile.stamp

doxyfile.stamp:
	$(DOXYGEN) doc/Doxyfile
	echo Timestamp > doxyfile.stamp

CLEANFILES = doxyfile.stamp

all-local: doxyfile.stamp
clean-local:
	rm -rf $(top_srcdir)/docs/man
endif
