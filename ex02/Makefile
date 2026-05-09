CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -g -std=c++14

SRC			:= main.cpp
NAME		:= mutant
OBJDIR		:= obj
OBJ			:= $(SRC:%.c=$(OBJDIR)/%.o)


all: $(NAME)
$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiled. \nrun with: ./$(NAME)"

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CXX) $C(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean rules
clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
.PHONY: all clean fclean re