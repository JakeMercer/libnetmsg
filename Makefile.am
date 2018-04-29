AM_CPPFLAGS = -I$(top_srcdir)/include

lib_LTLIBRARIES = libnetmsg.la
libnetmsg_la_SOURCES = source/utilities.h \
					   source/ethernet.c

include_HEADERS = include/ethernet.h

TESTS = ethernet_TEST
ethernet_TEST_SOURCES = test/ethernet.c
ethernet_TEST_LDADD = libnetmsg.la

noinst_PROGRAMS = $(TESTS)

#if HAVE_DOXYGEN
#directory = $(top_srcdir)/doc/man/man3
#
#dist_man_MANS = $(directory)/man_page_1.3 $(directory)/man_page_2.3
#$(directory)/man_page_1.3: doxyfile.stamp
#$(directory)/man_page_2.3: doxyfile.stamp
#
#doxyfile.stamp:
#	$(DOXYGEN) doc/Doxyfile
#	echo Timestamp > doxyfile.stamp
#
#CLEANFILES = doxyfile.stamp
#
#all-local: doxyfile.stamp
#clean-local:
#	rm -rf $(top_srcdir)/docs/man
#endif
