#include <cpp_examples.h>
#include <Windows.h>

int ExamplesSingleton::n_instances;
ExamplesSingleton* ExamplesSingleton::instance;

int main(int argc, char **argv) {
	ExamplesSingleton* proxy = ExamplesSingleton::getExamplesInterface();
	proxy->read_sum_write(argc, argv);
}