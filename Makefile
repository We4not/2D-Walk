COMPILER = gcc
FOLDEROBJ = obj
FOLDERBIN = bin
EXECUTABLEFILE = Program.exe

all: Program

Program: $(FOLDEROBJ)/main.o $(FOLDEROBJ)/Player.o
	$(COMPILER) $(FOLDEROBJ)/main.o $(FOLDEROBJ)/Player.o -o $(FOLDERBIN)/$(EXECUTABLEFILE)

$(FOLDEROBJ)/main.o: main.c
	$(COMPILER) -o $(FOLDEROBJ)/main.o -c main.c

$(FOLDEROBJ)/Player.o: Player.c
	$(COMPILER) -o $(FOLDEROBJ)/Player.o -c Player.c