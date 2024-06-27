COMPILER = gcc # compiler
FOLDEROBJ = obj # folder objects file
FOLDERBIN = bin # folder executable file
EXECUTABLEFILE = Program.exe # name file executable

all: Program

Program: $(FOLDEROBJ)/main.o $(FOLDEROBJ)/Player.o
	$(COMPILER) $(FOLDEROBJ)/main.o $(FOLDEROBJ)/Player.o -o $(FOLDERBIN)/$(EXECUTABLEFILE)

$(FOLDEROBJ)/main.o: main.c
	$(COMPILER) -o $(FOLDEROBJ)/main.o -c main.c

$(FOLDEROBJ)/Player.o: Player.c
	$(COMPILER) -o $(FOLDEROBJ)/Player.o -c Player.c