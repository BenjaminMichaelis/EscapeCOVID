# GNU Make allows you to simply type "make" in the bash terminal to trigger build directives for all source files
# in your program, instead of having to manually type out each directive for each file over and over again.
# Reference@ https://www.gnu.org/software/make/manual/make.html#Variables-Simplify

# PLEASE FOLLOW THE FORMAT BELOW TO MAKE A BASIC makefile USING GNU MAKE:

# all object files (ending with *.o) are encapsulated in the "objects" field. Just keep adding after main.o in order.
objects = main.o praphicsui.o #etc

# a is the executing file to run from the command line. If you enter "./a" in the terminal, it will run the program.
# the name of the file doesn't have to be "a". { FOR VSCODE ONLY: By default, tasks.json and launch.json will create a file with the same name as the one that contains your main() function. VSCode's tasks.json and launch.json are a DIFFERENT & SEPARATE build and debug directive from GNU Make. }
# for the sake of simplicity, I changed it to "a". You can leave it as default or change it to something else to suit your taste.
# the command below will build a file named "a" in linux (no extension), or a.exe in Windows (not sure about MacOS but I believe it will be a.out):
a: $(objects)
	g++ -o a $(objects)

# the series of command below will build object files ({filename}.o) from the source *.cpp files. You must make a separate build directive for each *.cpp file.
# as you can see below, main.o has its own build directive and graphicsui.o has its own build directive. Add more or modify directives as you have created more files.
main.o: main.cpp
	g++ -Wall -g -c std=c++17 main.cpp

grapicsui.o: graphicsui.cpp
	g++ -Wall -g -c std=c++17 graphicsui.cpp


# the command below allows you to delete all relevant files (except the source code files, i.e. those that end with *.cpp)
# from the project folder by simply typing "make clean" into the terminal:
.PHONY: clean
clean:
	rm a $(objects)

# That's the basic of a simple makefile. I think that should be enough for our project. - Karl, 12:06 | 2020, June 10, Wed 🚀
#
# Some basic flags to use with gcc/g++ compiler:
# "-g"	  		: add if you want to debug your program.
# "-Wall" 		: add to allow the compiler to display error messages.
# "-c"			: add to compile each file separately.
# "std=c++17"	: add to make sure the compiler comply to C++ standards up to 2017.
#
# (on Windows you should download and install mingw-w64, unsure about MacOS)