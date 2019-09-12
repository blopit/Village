//
//  Perlin.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-11.
//

#ifndef Perlin_hpp
#define Perlin_hpp

#include <stdio.h>


class Perlin {
public:
    Perlin();
    ~Perlin();
    
    // Generates a Perlin (smoothed) noise value between -1 and 1, at the given 3D position.
    float noise(float sample_x, float sample_y, float sample_z);
    
    
private:
    int *p; // Permutation table
    // Gradient vectors
    float *Gx;
    float *Gy;
    float *Gz;
};

#endif /* Perlin_hpp */
