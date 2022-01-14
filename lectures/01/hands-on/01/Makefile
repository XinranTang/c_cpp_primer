# main: main.cpp
#	 g++ -o main main.cpp

# better solution: # Use special tokens that allow you to easily add dependencies later
# $@ : will be substituted with the target name.
# $^ : will be substituted with all listed dependencies.
# $< : will be substituted with the 1st dependency only.
main: main.cpp
	g++ -o $@ $^