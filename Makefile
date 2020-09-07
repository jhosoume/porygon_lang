CC	     := gcc
CFLAGS   := -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic

TARGET   := bin/scanner

SRCEXT   := c
SRCDIR   := src
BUILDDIR := build
INCLUDEDIR := build

SRCEXT   := c
SOURCES  := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS  := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
LIB      := -lm
INC      := -I include

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

clean_all:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)
	@echo " $(RM) $(SRCDIR)/porygon_lex.c $(INCLUDEDIR)/porygon_lex.h"; $(RM) $(SRCDIR)/porygon_lex.c $(SRCDIR)/porygon_lex.h

flex:
	@echo " Running FLEX..."
	@echo " flex src/porygon_lex.l "; flex src/porygon_lex.l

.PHONY: clean_all flex
