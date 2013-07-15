
#include <iostream>
#include "bwt.h"

int main(int argc, char *argv[])
{
     const std::string target = argv[1];
     bwt b;
     std::cout << b.transform(target) << std::endl;
     return 0;
}
