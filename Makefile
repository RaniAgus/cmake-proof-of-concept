BUILD_DIR=build
CMAKE_BUILD_TYPE=Debug

all: | $(BUILD_DIR)
	cmake --build $(BUILD_DIR)
.PHONY: all

$(BUILD_DIR):
	cmake -S . -B $@ -DCMAKE_BUILD_TYPE=$(CMAKE_BUILD_TYPE)

clean:
	rm -rf $(BUILD_DIR)
.PHONY: clean

release: CMAKE_BUILD_TYPE = Release
release: all
.PHONY: release
