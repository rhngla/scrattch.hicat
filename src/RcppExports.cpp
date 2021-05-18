// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <RcppEigen.h>

using namespace Rcpp;

// RowMergeMatrices
Eigen::SparseMatrix<double> RowMergeMatrices(Eigen::SparseMatrix<double, Eigen::RowMajor> mat1, Eigen::SparseMatrix<double, Eigen::RowMajor> mat2, std::vector< std::string > mat1_rownames, std::vector< std::string > mat2_rownames, std::vector< std::string > all_rownames);
RcppExport SEXP _scrattch_hicat_RowMergeMatrices(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat1_rownamesSEXP, SEXP mat2_rownamesSEXP, SEXP all_rownamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double, Eigen::RowMajor> >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double, Eigen::RowMajor> >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type mat1_rownames(mat1_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type mat2_rownames(mat2_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type all_rownames(all_rownamesSEXP);
    rcpp_result_gen = Rcpp::wrap(RowMergeMatrices(mat1, mat2, mat1_rownames, mat2_rownames, all_rownames));
    return rcpp_result_gen;
END_RCPP
}
// RowMergeMatricesList
Eigen::SparseMatrix<double> RowMergeMatricesList(List mat_list, List mat_rownames, std::vector< std::string > all_rownames);
RcppExport SEXP _scrattch_hicat_RowMergeMatricesList(SEXP mat_listSEXP, SEXP mat_rownamesSEXP, SEXP all_rownamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type mat_list(mat_listSEXP);
    Rcpp::traits::input_parameter< List >::type mat_rownames(mat_rownamesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type all_rownames(all_rownamesSEXP);
    rcpp_result_gen = Rcpp::wrap(RowMergeMatricesList(mat_list, mat_rownames, all_rownames));
    return rcpp_result_gen;
END_RCPP
}
// LogNorm
Eigen::SparseMatrix<double> LogNorm(Eigen::SparseMatrix<double> data, int scale_factor, bool display_progress);
RcppExport SEXP _scrattch_hicat_LogNorm(SEXP dataSEXP, SEXP scale_factorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(LogNorm(data, scale_factor, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// Standardize
NumericMatrix Standardize(Eigen::Map<Eigen::MatrixXd> mat, bool display_progress);
RcppExport SEXP _scrattch_hicat_Standardize(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(Standardize(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastSparseRowScale
Eigen::MatrixXd FastSparseRowScale(Eigen::SparseMatrix<double> mat, bool scale, bool center, double scale_max, bool display_progress);
RcppExport SEXP _scrattch_hicat_FastSparseRowScale(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP, SEXP scale_maxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type scale_max(scale_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastSparseRowScale(mat, scale, center, scale_max, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastSparseRowScaleWithKnownStats
Eigen::MatrixXd FastSparseRowScaleWithKnownStats(Eigen::SparseMatrix<double> mat, NumericVector mu, NumericVector sigma, bool scale, bool center, double scale_max, bool display_progress);
RcppExport SEXP _scrattch_hicat_FastSparseRowScaleWithKnownStats(SEXP matSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP scaleSEXP, SEXP centerSEXP, SEXP scale_maxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type scale_max(scale_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastSparseRowScaleWithKnownStats(mat, mu, sigma, scale, center, scale_max, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastCov
Eigen::MatrixXd FastCov(Eigen::MatrixXd mat, bool center);
RcppExport SEXP _scrattch_hicat_FastCov(SEXP matSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(FastCov(mat, center));
    return rcpp_result_gen;
END_RCPP
}
// FastCovMats
Eigen::MatrixXd FastCovMats(Eigen::MatrixXd mat1, Eigen::MatrixXd mat2, bool center);
RcppExport SEXP _scrattch_hicat_FastCovMats(SEXP mat1SEXP, SEXP mat2SEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(FastCovMats(mat1, mat2, center));
    return rcpp_result_gen;
END_RCPP
}
// FastRBind
Eigen::MatrixXd FastRBind(Eigen::MatrixXd mat1, Eigen::MatrixXd mat2);
RcppExport SEXP _scrattch_hicat_FastRBind(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat2(mat2SEXP);
    rcpp_result_gen = Rcpp::wrap(FastRBind(mat1, mat2));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowMean
Eigen::VectorXd SparseRowMean(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _scrattch_hicat_SparseRowMean(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowMean(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowVar2
NumericVector SparseRowVar2(Eigen::SparseMatrix<double> mat, NumericVector mu, bool display_progress);
RcppExport SEXP _scrattch_hicat_SparseRowVar2(SEXP matSEXP, SEXP muSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowVar2(mat, mu, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowVarStd
NumericVector SparseRowVarStd(Eigen::SparseMatrix<double> mat, NumericVector mu, NumericVector sd, double vmax, bool display_progress);
RcppExport SEXP _scrattch_hicat_SparseRowVarStd(SEXP matSEXP, SEXP muSEXP, SEXP sdSEXP, SEXP vmaxSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type vmax(vmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowVarStd(mat, mu, sd, vmax, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// FastLogVMR
Eigen::VectorXd FastLogVMR(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _scrattch_hicat_FastLogVMR(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(FastLogVMR(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// RowVar
NumericVector RowVar(Eigen::Map<Eigen::MatrixXd> x);
RcppExport SEXP _scrattch_hicat_RowVar(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(RowVar(x));
    return rcpp_result_gen;
END_RCPP
}
// SparseRowVar
Eigen::VectorXd SparseRowVar(Eigen::SparseMatrix<double> mat, bool display_progress);
RcppExport SEXP _scrattch_hicat_SparseRowVar(SEXP matSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseRowVar(mat, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// ReplaceColsC
Eigen::SparseMatrix<double> ReplaceColsC(Eigen::SparseMatrix<double> mat, NumericVector col_idx, Eigen::SparseMatrix<double> replacement);
RcppExport SEXP _scrattch_hicat_ReplaceColsC(SEXP matSEXP, SEXP col_idxSEXP, SEXP replacementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type replacement(replacementSEXP);
    rcpp_result_gen = Rcpp::wrap(ReplaceColsC(mat, col_idx, replacement));
    return rcpp_result_gen;
END_RCPP
}
// GraphToNeighborHelper
List GraphToNeighborHelper(Eigen::SparseMatrix<double> mat);
RcppExport SEXP _scrattch_hicat_GraphToNeighborHelper(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(GraphToNeighborHelper(mat));
    return rcpp_result_gen;
END_RCPP
}
// ImputeKnn
void ImputeKnn(IntegerMatrix knn_idx, IntegerVector ref_idx, IntegerVector cell_idx, IntegerVector gene_idx, NumericMatrix dat, NumericMatrix impute_dat, Nullable<NumericMatrix> w_mat_, bool transpose_input, bool transpose_output);
RcppExport SEXP _scrattch_hicat_ImputeKnn(SEXP knn_idxSEXP, SEXP ref_idxSEXP, SEXP cell_idxSEXP, SEXP gene_idxSEXP, SEXP datSEXP, SEXP impute_datSEXP, SEXP w_mat_SEXP, SEXP transpose_inputSEXP, SEXP transpose_outputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type knn_idx(knn_idxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ref_idx(ref_idxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cell_idx(cell_idxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gene_idx(gene_idxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dat(datSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type impute_dat(impute_datSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericMatrix> >::type w_mat_(w_mat_SEXP);
    Rcpp::traits::input_parameter< bool >::type transpose_input(transpose_inputSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose_output(transpose_outputSEXP);
    ImputeKnn(knn_idx, ref_idx, cell_idx, gene_idx, dat, impute_dat, w_mat_, transpose_input, transpose_output);
    return R_NilValue;
END_RCPP
}
// ComputeSNN
Eigen::SparseMatrix<double> ComputeSNN(Eigen::MatrixXd nn_ranked, double prune);
RcppExport SEXP _scrattch_hicat_ComputeSNN(SEXP nn_rankedSEXP, SEXP pruneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    rcpp_result_gen = Rcpp::wrap(ComputeSNN(nn_ranked, prune));
    return rcpp_result_gen;
END_RCPP
}
// WriteEdgeFile
void WriteEdgeFile(Eigen::SparseMatrix<double> snn, String filename, bool display_progress);
RcppExport SEXP _scrattch_hicat_WriteEdgeFile(SEXP snnSEXP, SEXP filenameSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    WriteEdgeFile(snn, filename, display_progress);
    return R_NilValue;
END_RCPP
}
// DirectSNNToFile
Eigen::SparseMatrix<double> DirectSNNToFile(Eigen::MatrixXd nn_ranked, double prune, bool display_progress, String filename);
RcppExport SEXP _scrattch_hicat_DirectSNNToFile(SEXP nn_rankedSEXP, SEXP pruneSEXP, SEXP display_progressSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(DirectSNNToFile(nn_ranked, prune, display_progress, filename));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scrattch_hicat_RowMergeMatrices", (DL_FUNC) &_scrattch_hicat_RowMergeMatrices, 5},
    {"_scrattch_hicat_RowMergeMatricesList", (DL_FUNC) &_scrattch_hicat_RowMergeMatricesList, 3},
    {"_scrattch_hicat_LogNorm", (DL_FUNC) &_scrattch_hicat_LogNorm, 3},
    {"_scrattch_hicat_Standardize", (DL_FUNC) &_scrattch_hicat_Standardize, 2},
    {"_scrattch_hicat_FastSparseRowScale", (DL_FUNC) &_scrattch_hicat_FastSparseRowScale, 5},
    {"_scrattch_hicat_FastSparseRowScaleWithKnownStats", (DL_FUNC) &_scrattch_hicat_FastSparseRowScaleWithKnownStats, 7},
    {"_scrattch_hicat_FastCov", (DL_FUNC) &_scrattch_hicat_FastCov, 2},
    {"_scrattch_hicat_FastCovMats", (DL_FUNC) &_scrattch_hicat_FastCovMats, 3},
    {"_scrattch_hicat_FastRBind", (DL_FUNC) &_scrattch_hicat_FastRBind, 2},
    {"_scrattch_hicat_SparseRowMean", (DL_FUNC) &_scrattch_hicat_SparseRowMean, 2},
    {"_scrattch_hicat_SparseRowVar2", (DL_FUNC) &_scrattch_hicat_SparseRowVar2, 3},
    {"_scrattch_hicat_SparseRowVarStd", (DL_FUNC) &_scrattch_hicat_SparseRowVarStd, 5},
    {"_scrattch_hicat_FastLogVMR", (DL_FUNC) &_scrattch_hicat_FastLogVMR, 2},
    {"_scrattch_hicat_RowVar", (DL_FUNC) &_scrattch_hicat_RowVar, 1},
    {"_scrattch_hicat_SparseRowVar", (DL_FUNC) &_scrattch_hicat_SparseRowVar, 2},
    {"_scrattch_hicat_ReplaceColsC", (DL_FUNC) &_scrattch_hicat_ReplaceColsC, 3},
    {"_scrattch_hicat_GraphToNeighborHelper", (DL_FUNC) &_scrattch_hicat_GraphToNeighborHelper, 1},
    {"_scrattch_hicat_ImputeKnn", (DL_FUNC) &_scrattch_hicat_ImputeKnn, 9},
    {"_scrattch_hicat_ComputeSNN", (DL_FUNC) &_scrattch_hicat_ComputeSNN, 2},
    {"_scrattch_hicat_WriteEdgeFile", (DL_FUNC) &_scrattch_hicat_WriteEdgeFile, 3},
    {"_scrattch_hicat_DirectSNNToFile", (DL_FUNC) &_scrattch_hicat_DirectSNNToFile, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_scrattch_hicat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
