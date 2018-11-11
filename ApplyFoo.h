//
// Created by Josh Reuben on 2018-11-02.
//

#ifndef TBB_FUN_APPLYFOO_H
#define TBB_FUN_APPLYFOO_H


#include "tbb/tbb.h"

using namespace tbb;

class ApplyFoo {
    float *const my_a;
public:
    void Foo(float d) const {

    }

    void operator()(const blocked_range<size_t>& r ) const {
        float *a = my_a;
        for( size_t i=r.begin(); i!=r.end(); ++i )
            Foo(a[i]);
    }
    explicit ApplyFoo( float a[] ) :
            my_a(a)
    {}
};


#endif //TBB_FUN_APPLYFOO_H
