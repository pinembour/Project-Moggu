CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-I../include -Wall -Wextra -Werror
LDFLAGS=
LDLIBS=

SRCS=main.cpp Moggu.cpp Enclos.cpp Joueur.cpp 
OBJS=$(subst .cpp,.o,$(SRCS))
all: moggu_oo

moggu_oo: $(OBJS)
	$(CXX) $(LDFLAGS) -o moggu_oo $(OBJS) $(LDLIBS)

main.o: main.cpp

Enclos.o: Enclos.cpp

Joueur.o: Joueur.cpp

Moggu.o: Moggu.cpp

clean:
	$(RM) $(OBJS)

distclean:
	$(RM) server
