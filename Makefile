# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

APPNAME = EscapeCOVIDConsole

all: subsystem

subsystem:
	$(MAKE) -C $(APPNAME)

%:
	$(MAKE) -C $(APPNAME) $@