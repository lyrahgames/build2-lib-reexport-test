#include <iostream>
//
#include <libxxx/xxx.hpp>

int main(int argc, char* argv[]) {
  using namespace std;

  if (argc < 2) {
    cerr << "error: missing name" << endl;
    return 1;
  }

  xxx::say_hello(cout, "World");
}
