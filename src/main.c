#include "scanner.h"

int main(int argc, char** argv) {
  if (deals_input(argc, argv) == 1) {
      return 1;
  }
  run_scanner();
  ends_scan(argc);

  return 0;
}
