TARGET = Tutorial
OBJS = main.o 

CFLAGS =
CXXFLAGS = $(CFLAGS) -std=c++14 -fno-rtti
ASFLAGS = $(CFLAGS)

# PSP STUFF
BUILD_ PRX = 1
PSP_FW_VERSION = 500
PSP_LARGE_MEMORY = 1

EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = Our Aplication

PSPSDK= $(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak