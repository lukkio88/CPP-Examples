#include <file_example.h>

using std::ifstream;
using std::stringstream;
using std::string;
using std::ofstream;
using std::cout;
using std::endl;

int read_file(const std::string& filename) {
	ifstream ifs(filename);
	string line;

	while (std::getline(ifs, line)) {
		cout << line << endl;
	}

	ifs.close();
	return 0;
}

int read_sum_output(const std::string & input, const std::string & output) {
	ifstream ifs(input);
	ofstream ofs(output);
	string line;
	stringstream iss;

	int a, b;

	while (std::getline(ifs, line)) {
		iss = stringstream(line);
		iss >> a >> b;
		ofs << (a + b) << endl;
	}

	ifs.close();
	ofs.close();
	return 0;
}