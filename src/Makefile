PLUGIN=plugin-manager.so
SOURCES=\
        plugin-manager.cc \
		$(END)

include ./Makefile.common

.PHONY: test
test: $(PLUGIN)
	$(CCPLUGIN) -c -o /dev/null test.c
