CXX				:= c++
CXXFLAGS	:= -std=c++17 -pthread -pedantic-errors -Wall -Wextra -Werror
ifeq ($(OS),Linux)
LDLIBS	:= -L/usr/lib 		# -L is the path to the directories containing the libraries. A search path for libraries. In Linux '/usr/lib' - contains libraries, object files and, in some cases, internal binaries - for programming and packages
else
ifeq ($(OS),Windows_NT)
LDLIBS	:=								# -L is the path to the directories containing the libraries. A search path for libraries. In Windows - the true equivalent of /usr/lib/ ii really  '%windir%\system32' - C:\Windows\System32. But, if you're using the MINGW GCC compiler , GCC itself furnishes the effective defaults, by supplying appropriate -L options itself, so leave this empty (do not put anything)
endif
endif
LDFLAGS 	:= -lstdc++ -lm 	# -l is the name of the library you want to link to.
INC_DIR		:= inc
SRC_DIR		:= src
BUILD_DIR	:= build
OBJ_DIR		:= $(BUILD_DIR)/obj
APP_DIR		:= $(BUILD_DIR)/bin

APP_NAME	:= Ch5_Sec4_Example2_2

INCLUDE	:= -I$(INC_DIR)/
SRCS		:= $(wildcard $(SRC_DIR)/*.cpp)
INCS		:= $(wildcard $(INC_DIR)/*.hpp)
OBJS		:= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)	# DO NOT HAVE EMPTY SPACES (' ') between the assign '=' symbols

.PHONY: all build clean debug release 		# Define/Indicate '.PHONY' targets that are not files. The '.PHONY' rule keeps
											# 'make' from looking for or doing something with a file named 'all' 'release', etc.
											# For example, a name for the recipe - we call these "phony targets."
all: build $(APP_DIR)/$(APP_NAME)

# Break the compilation into 2 stages:
$(OBJ_DIR)/%.o: %.cpp $(INCS) 		# Stage (1): with compilation and assembly happening first (output to object files), with check whether there has been any change in the source (.cpp) or header (.hpp) files.
	@mkdir -p $(@D)					# Take the directory component of the target (left of the ':'), and create that direcotry - i.e. 'build/objects/src'
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(LDLIBS) $(LDFLAGS) -o $@ -c $<

$(APP_DIR)/$(APP_NAME): $(OBJS) # Stage (2):  linking object files into a final executable or library afterward - this prevents having to recompile all object files when their source files haven't changed, thus the dependency on object files.
	@mkdir -p $(@D)					# Take the directory component of the target (left of the ':'), and create that direcotry - i.e. 'build/bin'
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(LDLIBS) $(LDFLAGS) -o $(APP_DIR)/$(APP_NAME) $(OBJS)

build:
	@mkdir -p $(OBJ_DIR)	# Create the directory '/build/objects'
	@mkdir -p $(APP_DIR)	# Create the directory '/build/bin'

debug:	CXXFLAGS += -DDEBUG -g3
debug:	all

release:	CXXFLAGS += -O3
release:	all

clean:
	-@rm -rvf $(OBJ_DIR)/*	# Delete the content of the directory '/build/objects', but not the directory (folder) itself
	-@rm -rvf $(APP_DIR)/*	# Delete the content of the directory '/build/apps', but not the directory (folder) itself
