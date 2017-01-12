// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sample_geno_cpp
NumericMatrix sample_geno_cpp(NumericMatrix freq, double ploidy, NumericVector sample_size, int nIND);
RcppExport SEXP pcadapt_sample_geno_cpp(SEXP freqSEXP, SEXP ploidySEXP, SEXP sample_sizeSEXP, SEXP nINDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< double >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_geno_cpp(freq, ploidy, sample_size, nIND));
    return rcpp_result_gen;
END_RCPP
}
// get_size_file
NumericVector get_size_file(std::string path);
RcppExport SEXP pcadapt_get_size_file(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(get_size_file(path));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_cov_file
Rcpp::List cmpt_cov_file(std::string path, double min_maf, int ploidy);
RcppExport SEXP pcadapt_cmpt_cov_file(SEXP pathSEXP, SEXP min_mafSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_cov_file(path, min_maf, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// lrfunc_file
Rcpp::List lrfunc_file(std::string filename, NumericMatrix scores, int nIND, int nSNP, int K, int ploidy, double min_maf);
RcppExport SEXP pcadapt_lrfunc_file(SEXP filenameSEXP, SEXP scoresSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP KSEXP, SEXP ploidySEXP, SEXP min_mafSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    rcpp_result_gen = Rcpp::wrap(lrfunc_file(filename, scores, nIND, nSNP, K, ploidy, min_maf));
    return rcpp_result_gen;
END_RCPP
}
// tAA_cpp
NumericMatrix tAA_cpp(NumericMatrix x, int nrow, int ncol);
RcppExport SEXP pcadapt_tAA_cpp(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(tAA_cpp(x, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_cov_matrix
Rcpp::List cmpt_cov_matrix(NumericMatrix input, double min_maf, int ploidy);
RcppExport SEXP pcadapt_cmpt_cov_matrix(SEXP inputSEXP, SEXP min_mafSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_cov_matrix(input, min_maf, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// lrfunc_matrix
Rcpp::List lrfunc_matrix(NumericMatrix Geno, NumericMatrix scores, int nIND, int nSNP, int K, int ploidy, double min_maf);
RcppExport SEXP pcadapt_lrfunc_matrix(SEXP GenoSEXP, SEXP scoresSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP KSEXP, SEXP ploidySEXP, SEXP min_mafSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Geno(GenoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    rcpp_result_gen = Rcpp::wrap(lrfunc_matrix(Geno, scores, nIND, nSNP, K, ploidy, min_maf));
    return rcpp_result_gen;
END_RCPP
}
// ped2pcadapt
int ped2pcadapt(std::string path);
RcppExport SEXP pcadapt_ped2pcadapt(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(ped2pcadapt(path));
    return rcpp_result_gen;
END_RCPP
}