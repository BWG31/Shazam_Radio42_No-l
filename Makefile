NAME	=	shazam
SRC_F	=	main \
			script \
			script_text
SRCS	=	$(addsuffix .c, $(SRC_F))
OBJS	=	$(addsuffix .o, $(SRC_F))
HDRS	=	shazam.h

all:		$(NAME)

$(NAME):	$(SRCS)
			gcc $(SRCS) -o $(NAME)

clean:

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re