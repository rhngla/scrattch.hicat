// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ImputeKnn
void ImputeKnn(IntegerMatrix knn_idx, IntegerVector cell_idx, IntegerVector ref_idx, NumericMatrix dat, Nullable<IntegerVector> gene_idx_, Nullable<NumericMatrix> w_mat_, NumericMatrix impute_dat, bool transpose_input, bool transpose_output);
RcppExport SEXP _scrattch_hicat_ImputeKnn(SEXP knn_idxSEXP, SEXP cell_idxSEXP, SEXP ref_idxSEXP, SEXP datSEXP, SEXP gene_idx_SEXP, SEXP w_mat_SEXP, SEXP impute_datSEXP, SEXP transpose_inputSEXP, SEXP transpose_outputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type knn_idx(knn_idxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cell_idx(cell_idxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ref_idx(ref_idxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dat(datSEXP);
    Rcpp::traits::input_parameter< Nullable<IntegerVector> >::type gene_idx_(gene_idx_SEXP);
    Rcpp::traits::input_parameter< Nullable<NumericMatrix> >::type w_mat_(w_mat_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type impute_dat(impute_datSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose_input(transpose_inputSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose_output(transpose_outputSEXP);
    ImputeKnn(knn_idx, cell_idx, ref_idx, dat, gene_idx_, w_mat_, impute_dat, transpose_input, transpose_output);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scrattch_hicat_ImputeKnn", (DL_FUNC) &_scrattch_hicat_ImputeKnn, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_scrattch_hicat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}