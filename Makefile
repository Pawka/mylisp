.PHONY: compile


compile:
	cc -std=c99 -Wall prompt.c -ledit -o prompt
