SRC = main.c src/addrun.c src/search.c src/modify.c 
INC = inc

target : $(SRC) $(INC)
	gcc $(SRC) -I$(INC) -o output.exe

run : target 
	./output.exe
