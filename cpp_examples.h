#ifndef __CPP_EXAMPLE_H
#define __CPP_EXAMPLE_H
#include <file_example.h>

class ExamplesSingleton {
public:
	static ExamplesSingleton* getExamplesInterface() {
		if (n_instances == 0) {
			n_instances = 1;
			instance = new ExamplesSingleton();
		}
		return instance;
	}
	int read_file_line_by_line(int argc, char **argv) {
		if (argc != 2) {
			std::cout << "Error" << std::endl;
			return 1;
		}
		return read_file(argv[1]);
	}
	int read_sum_write(int argc, char **argv) {
		if (argc != 3) {
			std::cout << "Error" << std::endl;
			return 1;
		}
		return read_sum_output(argv[1], argv[2]);
	}
private:
	static int n_instances;
	static ExamplesSingleton* instance;
};

#endif