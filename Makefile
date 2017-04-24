# MAKEFILE MALEDICTUS



Maledictus: main.o Character.o Features.o CreationMenu.o Menu.o InnMenu.o DungeonMenu.o Combat.o ConsoleInputControl.o FileManagement.o
	g++ -o Maledictus main.o Character.o Features.o CreationMenu.o Menu.o InnMenu.o DungeonMenu.o Combat.o ConsoleInputControl.o FileManagement.o
#
#
#
Character.o: Character.hpp Character.cpp
	g++ -c Character.hpp Character.cpp
#
Features.o: Features.hpp Features.cpp
	g++ -c Features.hpp Features.cpp
#
CreationMenu.o: CreationMenu.hpp CreationMenu.cpp
	g++ -c CreationMenu.hpp CreationMenu.cpp
#
Menu.o: Menu.hpp Menu.cpp
	g++ -c Menu.hpp Menu.cpp
#
InnMenu.o: InnMenu.hpp InnMenu.cpp
	g++ -c InnMenu.hpp InnMenu.cpp
#
DungeonMenu.o: DungeonMenu.hpp DungeonMenu.cpp
	g++ -c DungeonMenu.hpp DungeonMenu.cpp
#
Combat.o: Combat.hpp Combat.cpp
	g++ -c Combat.hpp Combat.cpp
#
ConsoleInputControl.o: ConsoleInputControl.hpp ConsoleInputControl.cpp
	g++ -c ConsoleInputControl.hpp ConsoleInputControl.cpp
#
FileManagement.o: FileManagement.hpp FileManagement.cpp
	g++ -c FileManagement.hpp FileManagement.cpp 
#
main.o: main.cpp
	g++ -c main.cpp
#
#
#
clean:
	rm -f *.o
	rm -f *.gch
	rm Maledictus
	clear
#
