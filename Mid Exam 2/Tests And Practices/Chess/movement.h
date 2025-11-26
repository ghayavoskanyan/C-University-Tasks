#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <iostream>

namespace Movement {

    void moveHorizontal (int steps) {
        std::cout << "Moving horizontally by " << steps << " steps\n";
    }

    void moveVertical (int steps) {
        std::cout << "Moving vertically by " << steps << " steps\n";
    }

    void moveDiagonal (int steps) {
        std::cout << "Moving diagonally by " << steps << " steps\n";
    }

}

#endif