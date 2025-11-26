#include "queen.cpp"
#include "rook.cpp"

int main () {
    Rook r;
    Queen q;

    std::cout << "Rook moves:\n";
    r.move ();

    std::cout << "\nQueen moves:\n";
    q.move ();

    return 0;
}
