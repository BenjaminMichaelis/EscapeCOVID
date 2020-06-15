OBJECTS = main.o game.o playerObj.o virusObj.o
SFML = -lsfml-graphics -lsfml-window -lsfml-system

a: $(OBJECTS)
	g++ -o a $(OBJECTS) $(SFML)

main.o: main.cpp rootheader.h
	g++ -Wall -Wextra -Wconversion -pedantic -std=c++17 -g -c main.cpp

game.o: game.cpp rootheader.h
	g++ -Wall -Wextra -Wconversion -pedantic -std=c++17 -g -c game.cpp

playerObj.o: playerObj.cpp rootheader.h
	g++ -Wall -Wextra -Wconversion -pedantic -std=c++17 -g -c playerObj.cpp

virusObj.o: virusObj.cpp rootheader.h
	g++ -Wall -Wextra -Wconversion -pedantic -std=c++17 -g -c virusObj.cpp

.PHONY: clean
clean:
	rm a $(OBJECTS)