CFLAGS += -Wall -Wextra -Werror

OUTPUT = rush-02

SOURCES = build_dict.c ft_atoi.c get_empty_dict.c check_input.c num_to_text.c

make: build
	cc *.o  -o $(OUTPUT)

build:
	cc -c $(SOURCES)	
	
fclean:
	rm -f *.o *.gch rush-02
