#pragma once
#ifndef LIBIGL_PREDICATES
#define LIBIGL_PREDICATES

#ifdef __cplusplus
extern "C" {
#endif

void igl_exactinit();

#ifdef LIBIGL_PREDICATES_USE_FLOAT
typedef float IGL_PREDICATES_REAL;
#else
typedef double IGL_PREDICATES_REAL;
#endif
IGL_PREDICATES_REAL igl_orient2d(IGL_PREDICATES_REAL pa[2],
                                 IGL_PREDICATES_REAL pb[2],
                                 IGL_PREDICATES_REAL pc[2]);
IGL_PREDICATES_REAL igl_orient3d(IGL_PREDICATES_REAL pa[3],
                                 IGL_PREDICATES_REAL pb[3],
                                 IGL_PREDICATES_REAL pc[3],
                                 IGL_PREDICATES_REAL pd[3]);
IGL_PREDICATES_REAL igl_incircle(IGL_PREDICATES_REAL pa[2],
                                 IGL_PREDICATES_REAL pb[2],
                                 IGL_PREDICATES_REAL pc[2],
                                 IGL_PREDICATES_REAL pd[2]);
IGL_PREDICATES_REAL igl_insphere(IGL_PREDICATES_REAL pa[3],
                                 IGL_PREDICATES_REAL pb[3],
                                 IGL_PREDICATES_REAL pc[3],
                                 IGL_PREDICATES_REAL pd[3],
                                 IGL_PREDICATES_REAL pe[3]);

#ifdef __cplusplus
}
namespace igl_predicates {
inline void exactinit() { igl_exactinit(); }
inline IGL_PREDICATES_REAL orient2d(IGL_PREDICATES_REAL pa[2],
                                    IGL_PREDICATES_REAL pb[2],
                                    IGL_PREDICATES_REAL pc[2]) {
    return igl_orient2d(pa, pb, pc);
}
inline IGL_PREDICATES_REAL orient3d(IGL_PREDICATES_REAL pa[3],
                                    IGL_PREDICATES_REAL pb[3],
                                    IGL_PREDICATES_REAL pc[3],
                                    IGL_PREDICATES_REAL pd[3]) {
    return igl_orient3d(pa, pb, pc, pd);
}
inline IGL_PREDICATES_REAL incircle(IGL_PREDICATES_REAL pa[2],
                                    IGL_PREDICATES_REAL pb[2],
                                    IGL_PREDICATES_REAL pc[2],
                                    IGL_PREDICATES_REAL pd[2]) {
    return igl_incircle(pa, pb, pc, pd);
}
inline IGL_PREDICATES_REAL insphere(IGL_PREDICATES_REAL pa[3],
                                    IGL_PREDICATES_REAL pb[3],
                                    IGL_PREDICATES_REAL pc[3],
                                    IGL_PREDICATES_REAL pd[3],
                                    IGL_PREDICATES_REAL pe[3]) {
    return igl_insphere(pa, pb, pc, pd, pe);
}
}  // namespace igl_predicates
#endif

#endif
