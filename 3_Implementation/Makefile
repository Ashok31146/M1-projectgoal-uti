# SRC = main.c\
# src/operations.c
# INC = inc
# all.exe : $(SRC) 
# 	gcc $^ -I$(INC) -o $@

# run : DTH.exe
# 	./DTH.exe

# clean:
# 	del DTH.exe
PROJ_NAME = DTH
SRC = main.c\
src/operations.c
 

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

build:
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run: build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))