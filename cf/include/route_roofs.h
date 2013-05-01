#ifndef _ROUTE_ROOFS_TO_ROADS_H_
#define _ROUTE_ROOFS_TO_ROADS_H_

#include "blender.h"
#include "util.h"

/// @brief function to account for roof contribution to impervious patches
extern bool route_roofs_to_roads(
    struct flow_struct* _flow_table, // The flow table for updating the flowy bits
    int _num_patches,		     // The number of patches in the flow table
    const double* _roofs, // The array of the contribution of roof squares to the nearest impervous surface
    const int* _impervious, // The array of flags indicating whether a square is an impervious surface
    const int* _patch,	    // The map of pixels to patch ids
    const int* _hill,	    // The map of squares to hill ids
    const int* _zone,	    // The map of squares to zone ids
    int _maxr,		    // The maximum row
    int _maxc);		    // The maximum column

#endif // _ROUTE_ROOFS_TO_ROADS_H_