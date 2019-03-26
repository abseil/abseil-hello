#include <iostream>
#include "absl/strings/str_cat.h"

int main(int argc, const char** argv) {
	for (int i = 0; i < argc; ++i) {
		std::cout << absl::StrCat("Arg ", i, ": ", argv[i], "\n");
	}
}
