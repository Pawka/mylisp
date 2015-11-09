.PHONY: compile


compile:
	cc -std=c99 -Wall repl.c -ledit -o repl
