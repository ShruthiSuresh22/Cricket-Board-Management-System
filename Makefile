TEST_PROJ_NAME = Cricket_Board_Management_System
BUILD_DIR = Build
CFLAGS = -Wall -g

SRC = mycode.c\
      src/*.c

INC = inc


$(BUILD_DIR):
	mkdir $(BUILD_DIR)

INC_TEST = -Iinc -Iunity


OUTPUT = $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)

TEST_SRC = src/*c\
test/test_cricketboardscore.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD_DIR)/Test_$(TEST_PROJ_NAME).$(EXEC)

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all : $(SRC) $(BUILD_DIR)
	gcc -I $(INC) $(SRC) -o $(call FixPath,$(OUTPUT)) 

run : all
	$(call FixPath,$(OUTPUT))

clean :
	$(RM) $(call FixPath,$(BUILD_DIR)/*)

valgrind :
	valgrind $(call FixPath,$(TEST_OUTPUT))

coverageCheck:$(BUILD_DIR)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(INC_TEST) -o $(OUTPUT)
	./$(OUTPUT)
 
test:$(BUILD_DIR)
	gcc $(TEST_SRC) $(INC_TEST) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
