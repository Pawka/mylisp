.PHONY: compile


compile:
	cc -std=c99 -Wall parsing.c mpc.c -ledit -lm -g -o parsing.o
