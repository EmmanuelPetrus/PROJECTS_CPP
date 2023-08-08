#include "monoalpha.h"

int main(int argc, char const *argv[])
{
    MonoAlpha monoalpha;
    monoalpha.encrypt("plainFile","cipherFile");
    monoalpha.decrypt("cipherFile","decrypt");

    return 0;
}

