// ------------------------------------------------------------------------------
// Copyright (c) 2011 GeometryFactory (FRANCE)
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_KERNEL_VECTOR_2_IMPL_H
#define SWIG_CGAL_KERNEL_VECTOR_2_IMPL_H
//member functions involving elements that are in include conflict
Vector_2::Vector_2(const Segment_2& s):data(s.get_data()){}
Vector_2::Vector_2(const Ray_2& r):data(r.get_data()){}
Vector_2::Vector_2(const Line_2& l):data(l.get_data()){}
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Direction_2,Vector_2::direction,direction)
#endif //SWIG_CGAL_KERNEL_VECTOR_2_IMPL_H