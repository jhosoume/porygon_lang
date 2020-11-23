CC	     := gcc
# CFLAGS   := -std=c11 --pedantic -O3 -Wall -Wextra -Wpedantic
CFLAGS   := -std=c18 --pedantic -Wall -Wextra -Wpedantic -g

TARGET   := bin/porygon

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
	@echo " $(RM) $(SRCDIR)/parser.c $(INCLUDEDIR)/parser.h"; $(RM) $(SRCDIR)/parser.c $(SRCDIR)/parser.h

flex:
	@echo " Running FLEX..."
	@echo " flex flex_bison/porygon_lex.l "; flex flex_bison/porygon_lex.l

bison:
	@echo " Running BISON..."
	@echo " bison -Wall -d -o -v flex_bison/porygon_syntax.y "; bison -Wall -d -o -v flex_bison/porygon_syntax.y

testing:
	@echo " Running Tests..."
	@mkdir -p valgrind_output
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t1_correct.out" ./bin/porygon tests/t1_correct.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t2_correct.out" ./bin/porygon tests/t2_correct.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t1_incorrect.out" ./bin/porygon tests/t1_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t2_incorrect.out" ./bin/porygon tests/t2_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t3_incorrect.out" ./bin/porygon tests/t3_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t4_incorrect.out" ./bin/porygon tests/t4_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t5_incorrect.out" ./bin/porygon tests/t5_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t6_incorrect.out" ./bin/porygon tests/t6_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t7_incorrect.out" ./bin/porygon tests/t7_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t8_incorrect.out" ./bin/porygon tests/t8_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t9_incorrect.out" ./bin/porygon tests/t9_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/t10_incorrect.out" ./bin/porygon tests/t10_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/extra1_correct.out" ./bin/porygon tests/extra1_correct.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/extra2_correct.out" ./bin/porygon tests/extra2_correct.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/extra1_incorrect.out" ./bin/porygon tests/extra1_incorrect.prg
	@echo " \n\n\n "
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="valgrind_output/extra2_incorrect.out" ./bin/porygon tests/extra2_incorrect.prg
	@echo " \n\n\n "


.PHONY: clean_all flex
