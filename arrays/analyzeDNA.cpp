#include "helpers.hpp" // for helpers::loadDNA
#include "dna.hpp"     // for dna::analyzeDNA
#include "arrays.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1;
    }
    else
    {
        int size = 0;
        int counterA = 0, counterC = 0, counterG = 0, counterT = 0;
        char *dnaArray1 = helpers::getDNA(argv[1], 0, size);
        dna::DNAArray dna2 = {dnaArray1, size};
        dna::analy_dna stats = {analyzeDna(dna2)};

        char *complementarySeq = dna::analyzeDNA(&dnaArray1[0], size, counterA, counterC, counterG, counterT);

        // We may need to make a new character array, but with a null terminated character to be able to print on screen.
        char *complementarySeqTerminated = new char[size + 1];
        std::copy(&stats.comp_seq[0], &stats.comp_seq[size - 1], &complementarySeqTerminated[0]);
        complementarySeqTerminated[size] = '\0';
        std::cout << "Adenine (A) content:" << stats.counterA << std::endl
                  << "Guanine (G) content:" << stats.counterG << std::endl
                  << "Cytocine(C) content:" << stats.counterC << std::endl
                  << "Thymine (T) content:" << stats.counterT << std::endl
                  << std::endl
                  << "Complementary Sequence:" << std::endl
                  << complementarySeqTerminated << std::endl;

        // Clean up.
        delete[] complementarySeq;
        delete[] complementarySeqTerminated;
        return 0;
    }
}
