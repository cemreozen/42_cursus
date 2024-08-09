CC = cc
CFLAGS = -Werror -Wall -Wextra
LIBFT_PATH = /libft/
INCDIR = .
SRCDIR = .
LIBDIR = .
NAME = libftprintf.a
SRCS = 
OBJS = $(SRCS:$(SRCDIR)/%.c=%.o)
HEADERS = $(INCDIR)/libft/libft.h
LIBRARY = $(LIBDIR)/$(NAME)
AR = /usr/bin/ar
ARFLAGS = rcs
RM = /bin/rm
RMFLAGS = -f
all : $(NAME)
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
%.o: $(SRCDIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
clean :
	$(RM) $(RMFLAGS) $(OBJS)
fclean : clean
	$(RM) $(RMFLAGS) $(NAME)
re : fclean all
.PHONY : all clean fclean re
