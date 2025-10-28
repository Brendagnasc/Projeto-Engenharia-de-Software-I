cat > Makefile <<'EOF'
CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -Wall -Wextra -g
SRC_DIR = src
OBJ_DIR = bin
TEST_DIR = test
EXEEXT ?=

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))
TARGET = $(OBJ_DIR)/app$(EXEEXT)
TEST_SRCS := $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJS := $(patsubst $(TEST_DIR)/%.cpp,$(OBJ_DIR)/%_test.o,$(TEST_SRCS))
TEST_TARGET = $(OBJ_DIR)/testRegressivo$(EXEEXT)

.PHONY: all clean test dirs

all: dirs $(TARGET)

dirs:
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%_test.o: $(TEST_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TEST_TARGET): $(TEST_OBJS) $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

test: dirs $(TEST_TARGET)
	@echo "Executando testes..."
	./$(TEST_TARGET)

clean:
	rm -rf $(OBJ_DIR)/*
