SRC = mycode.c addrun.c search.c modify.c 
INC = fun.h 

target : $(SRC) $(INC)
	gcc $(SRC) -o output.exe

run : target 
	./output.exe