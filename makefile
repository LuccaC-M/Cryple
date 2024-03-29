

NAME := cryple

SRC_DIR := src
SRCS :=  \
	main.cc \
    caesar.cc \
    affine.cc \
	A1Z26.cc \
	cmd.cc \
	piglatin.cc

SRCS := $(SRCS:%=$(SRC_DIR)/%)

CXX := g++
CXXFLAGS := -Wall -g

RM := rm -f


# make installs the program
# make clean unistalls it

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS)
	$(info CREATED $(NAME))
	mkdir -p ~/.local/bin/
	mv $(NAME) ~/.local/bin

clean:
	$(RM) ~/.local/bin/$(NAME)

re:
	$(MAKE) clean
	$(MAKE) all
