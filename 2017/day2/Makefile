# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
#LIBS=-I$(CPT_PATH) -L$(CPT_PATH) -lcpt


all: day2_1 day2_2

day2_1: day2_1.cpp
	$(CC) $^ -o day2_1

day2_2: day2_2.cpp
	$(CC) $^ -o day2_2

#bvp_example: bvp_example.cpp
#	$(CC) $^  $(LIBS) -o bvp_example

clean:
	rm -rf *o day2_1 day2_2
