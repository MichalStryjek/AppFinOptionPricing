// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// downInPrice
double downInPrice(int nInt, double strike, double spot, double vol, double r, double expiry, double barrier, long int reps);
RcppExport SEXP _PackageProject_downInPrice(SEXP nIntSEXP, SEXP strikeSEXP, SEXP spotSEXP, SEXP volSEXP, SEXP rSEXP, SEXP expirySEXP, SEXP barrierSEXP, SEXP repsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt(nIntSEXP);
    Rcpp::traits::input_parameter< double >::type strike(strikeSEXP);
    Rcpp::traits::input_parameter< double >::type spot(spotSEXP);
    Rcpp::traits::input_parameter< double >::type vol(volSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type expiry(expirySEXP);
    Rcpp::traits::input_parameter< double >::type barrier(barrierSEXP);
    Rcpp::traits::input_parameter< long int >::type reps(repsSEXP);
    rcpp_result_gen = Rcpp::wrap(downInPrice(nInt, strike, spot, vol, r, expiry, barrier, reps));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _PackageProject_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PackageProject_downInPrice", (DL_FUNC) &_PackageProject_downInPrice, 8},
    {"_PackageProject_rcpp_hello_world", (DL_FUNC) &_PackageProject_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_PackageProject(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}