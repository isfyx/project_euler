help:
	@echo "Usage: make [help | clean | problem_{num}]"
	@echo "  help: Display this message."
	@echo "  clean: Remove bin directory."
	@echo "  problem_{num}: Compile src/problem_{num}.cpp as bin/problem_{num}.out"

%: %.cpp mkbin
	g++ -c src/$< -o bin/$@.out

mkbin:
	mkdir -p bin

clean:
	rm -rf bin/