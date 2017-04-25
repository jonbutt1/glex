EXTRA_DIST = GameWorld.h GameAssetManager.h GameAsset.h CubeAsset.h

bin_PROGRAMS = shaderexample
shaderexample_SOURCES = main.cc
shaderexample_LDADD = libtest.la

lib_LTLIBRARIES=libtest.la
libtest_la_SOURCES=GameWorld.cc GameAssetManager.cc CubeAsset.cc
libtest_la_LDFLAGS = -version-info 0:0:0

lib_LTLIBRARIES+=libpytest.la
libpytest_la_SOURCES=PyCube.cc
libpytest_la_LDFLAGS = -version-info 0:0:0
libpytest_la_LIBADD = libtest.la -lboost_python -lpython3.5m

AM_CPPFLAGS = -DGL_GLEXT_PROTOTYPES -DGL3_PROTOTYPES -g
AM_CPPFLAGS += -std=c++11
AM_CPPFLAGS += $(gl_CFLAGS) $(glew_CFLAGS) $(sdl2_CFLAGS) $(BOOST_CPPFLAGS) -I/usr/include/python3.5m/
LIBS += $(gl_LIBS) $(glew_LIBS) $(sdl2_LIBS) $(BOOST_THREAD_LIBS) $(BOOST_PROGRAM_OPTIONS_LIBS)
