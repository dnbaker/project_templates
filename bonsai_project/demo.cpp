#include "bonsai/encoder.h"
#include "sketch/hll.h"
#include "bonsai/classifier.h"

int main(int main, char **argv) {
    bns::Encoder<> enc(31);
    sketch::hll_t h(10);
    for(char **ptr = argv; *++ptr;) {
        enc.for_each([&](auto x){h.addh(x);}, *ptr);
    }
    std::fprintf(stderr, "Cardinality of each file: %g\n", h.report());
}
