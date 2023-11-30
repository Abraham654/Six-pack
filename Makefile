
# Directorios de origen y destino
SRC_DIR := src
BIN_DIR := bin

# Obtener todos los archivos fuente
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Obtener los nombres de los ejecutables
EXECS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%,$(SRCS))

# Regla para compilar los ejecutables
all: $(EXECS)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	mkdir -p $(BIN_DIR)
	g++ -o $@ $<

# Regla para limpiar los ejecutables
clean:
	rm -rf $(BIN_DIR)

# Regla para ejecutar cada binario
run: $(EXECS)
	@read -p "Ingrese la función a ejecutar: " function; \
	for exec in $(EXECS); do \
		echo "Ejecutando $$exec con la función $$function"; \
		$$exec $$function; \
	done

.PHONY: all clean run

