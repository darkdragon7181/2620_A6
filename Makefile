# For Makefiles, lines preceded with # are comment lines
# Remember, Makefiles are your friends. You do not want to be compiling
# files individually.
# Makefile for CPSC2620 projects
#
# Author: Arie
# Sep. 15, 2011

# use the gnu C++ compiler
CCC= g++11
# list all warnings
CCCFLAGS = -Wall -g -std=c++11 

# all is called a target, after the colon you have dependencies
# ie. "the target all is dependent on the executables
all : prob2 perm select

# the target <excecutable1> is dependent on the list of dependencies
# the line following  is the required executable (don't need to adjust it)
# Note: executable lines, ie. $(CCC) ..., always begin with a tab.
# $^ = this target
# $@ = this/these dependencies
prob2: BST.o prob2.o
	$(CCC) $(CCCFLAGS) $^ -o $@
perm: perm.o
	$(CCC) $(CCCFLAGS) $^ -o $@
select: select.o
	$(CCC) $(CCCFLAGS) $^ -o $@

# if 2 or more problems in assignment, you can compile them all with extra 
# executable targets and dependencies.
# tester : map.o tester.o
#	$(CCC) $(CCCFLAGS) $^ -o $@

# default rule compiling .cc to .o
# all .o file targets are dependent on the corresponding .cc files
# $< = the corresponding .cc file
%.o : %.cc
	$(CCC) -c $(CCCFLAGS) $<

# Don't need next lines b/c of the above default rule but no harm including them
# In the following lines, make knows that the .cc file is required in the
# current dependency so you can leave it out.  You can also leave out the
# corresponding executable line

BST.o : BST.h
prob2.o : BST.h
perm.o : perm.cc
select.o : select.cc
#etc
clean:
	rm -f *.o *~ *% *# .#*

clean-all: clean
	rm -f prob2 perm select