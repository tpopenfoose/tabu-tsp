//
//  Swap.h
//  TB_TSP
//
//  Created by Young on 6/21/16.
//  Copyright © 2016 杨言. All rights reserved.
//

#ifndef Swap_h
#define Swap_h

struct Swap{
    int first;
    int last;
    double income;
    Swap()
    {
        first = last = -1;
        income = 0;
    }
    ~Swap(){}
};

#endif /* Swap_h */
