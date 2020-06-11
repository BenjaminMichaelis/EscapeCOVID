# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

APPNAME = EscapeCOVIDConsole
SFML_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: subsystem

subsystem:
	$(MAKE) -C $(APPNAME)

%:
	$(MAKE) -C $(APPNAME) $@