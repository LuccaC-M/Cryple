

NAME := cryple

SRC_DIR := src
SRCS :=  \
	main.cc \
    caesar.cc \
    affine.cc \
	A1Z26.cc \
	cmd.cc 
SRCS := $(SRCS:%=$(SRC_DIR)/%)

CXX := g++


RM := rm -f


# make installs the program
# make clean unistalls it

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) -o $(NAME) $(SRCS)
	$(info CREATED $(NAME))
	mkdir -p ~/.local/bin/
	mv $(NAME) ~/.local/bin

clean:
	$(RM) ~/.local/bin/$(NAME)

re:
	$(MAKE) clean
	$(MAKE) all