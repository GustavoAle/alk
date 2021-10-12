SRCDIR=src
FRMDIR=forms
OBJDIR=obj
ELF=./alk

SRC=$(wildcard $(SRCDIR)/*.cpp)
FORMS=$(wildcard $(FRMDIR)/*.cpp)
OBJS=$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))
OBJS+=$(patsubst $(FRMDIR)/%.cpp, $(OBJDIR)/%.o, $(FORMS))

CFLAGS=$(shell wx-config --cxxflags) -I./include -I./
LDFLAGS=$(shell wx-config --libs)

CC=g++

all: prepare $(OBJS)
	echo "all"
	echo $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $(ELF)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@ 

$(OBJDIR)/%.o: $(FRMDIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@ 

prepare:
	mkdir -p obj

clean:
	rm -f obj/* $(ELF)