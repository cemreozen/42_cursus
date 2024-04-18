#compiler
CC = cc
#compiler flags
CFLAGS = -Wall -Wextra -Werror -std=c99;
#Directories
SRCDIR = srcs
INCDIR = includes
LIBDIR = .
#source files
SRCS = $(wildcard $(SRCDIR)/*.c)
#object files
OBJS = $(SRCS:$(SRCDIR)/%.c=%.o)
#header files
HEADERS = $(wildcard $(INCDIR)/*.h)
#library name
LIBRARY = libft.a
#default target: builds the library
all: $(LIBRARY)
#rule for generating the library
$(LIBRARY): $(OBJS) ar rcs $(LIBDIR)/$(LIBRARY) $(OBJS)
#Rule for generating the object files from source files
%.o: $(SRCDIR)/%.c $(HEADERS) $(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@
#clean rule
clean: rm -f $(OBJS)
#fclean rule
fclean : rm -f $(LIBDIR)/$(LIBRARY)
#Rebuild rule
re: fclean all
.PHONY: all clean fclean re
