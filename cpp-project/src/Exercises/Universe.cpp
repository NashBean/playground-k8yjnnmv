// { autofold
#include "Universe.h"
// }

int Universe::CountAllStars(vector<int>& galaxies) 
{
    int total_stars = 0;
    for(int stars : galaxies) 
    {
        total_stars = total_stars + stars; // fix me! Did. Sep 8, 2024 by NashBean
    }
    return total_stars;
}

