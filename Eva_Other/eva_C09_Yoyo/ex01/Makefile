SOURCE_DIR = srcs

FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

INCLUDE_DIR = includes

INCLUDE_FILES = ft.h

COMPILER = cc

FLAGS = -Wall -Wextra -Werror

TARGET = libft.a

SRCS_FILES = $(addprefix $(SOURCE_DIR)/, $(FILES))

all: $(TARGET)

$(TARGET):
	$(COMPILER) $(FLAGS) -c $(SRCS_FILES) -I $(INCLUDE_DIR)
	ar rc $(TARGET) $(FILES:.c=.o)
	ranlib $(TARGET)
	
clean:
	rm -f $(FILES:.c=.o)

fclean: clean
	rm -f $(TARGET)

re: all fclean

.PHONY: all clean fclean re