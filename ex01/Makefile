CXXFLAGS	= -std=c++98 -Wall -Werror -Wextra
CXX		= c++
NAME	= fixed.out
OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f
SRCS	= main.cpp \
		  Fixed.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
