#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= 1) {
        return 1;
    } else {
        int div1 = numCrates/2;
        int div2 = numCrates - div1;
        return numTrucks(div1, loadSize) + numTrucks(div2, loadSize);
    }
}