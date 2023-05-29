NAME = Phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RMFLAGS = -f

# file names
MANDA_FILES = Contact \
			  main \
			  Phonebook\
			  utils \
			  


# Directories
MANDA_DIR = .
OBJ_DIR = .
INC_DIR = .
# Object files
MANDA_OBJ = $(addprefix $(OBJ_DIR)/$(MANDA_DIR)/, $(addsuffix .o, $(MANDA_FILES)))

# header files
MANDA_INC = Contact.hpp \
			Phonebook.hpp \


TARGET_OBJ = $(MANDA_OBJ)
TARGET_INC = .
RM_OBJ = $(BONUS_OBJ)


.PHONY : all clean fclean re bonus

all :
	@make $(NAME)

$(NAME) : $(TARGET_OBJ) $(TARGET_INC)
	$(RM) $(RMFLAGS) $(RM_OBJ)
	$(CC) $(CFLAGS) $(TARGET_OBJ) -o $@

$(OBJ_DIR)/$(MANDA_DIR)/%.o : $(MANDA_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/$(MANDA_DIR)
	$(CC) -c $(CFLAGS) $< -I$(INC_DIR) -o $@

clean :
	$(RM) $(RMFLAGS)r $(addsuffix .o, $(MANDA_FILES))

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re :
	make fclean
	make all