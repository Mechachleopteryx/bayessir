// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// simInit
IntegerMatrix simInit(int n, NumericVector startState);
RcppExport SEXP bayessir_simInit(SEXP nSEXP, SEXP startStateSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type startState(startStateSEXP );
        IntegerMatrix __result = simInit(n, startState);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dataLik
double dataLik(int infected, int observed, double repRate, bool givelog);
RcppExport SEXP bayessir_dataLik(SEXP infectedSEXP, SEXP observedSEXP, SEXP repRateSEXP, SEXP givelogSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type infected(infectedSEXP );
        Rcpp::traits::input_parameter< int >::type observed(observedSEXP );
        Rcpp::traits::input_parameter< double >::type repRate(repRateSEXP );
        Rcpp::traits::input_parameter< bool >::type givelog(givelogSEXP );
        double __result = dataLik(infected, observed, repRate, givelog);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sampleOnce
int sampleOnce(NumericVector weights);
RcppExport SEXP bayessir_sampleOnce(SEXP weightsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP );
        int __result = sampleOnce(weights);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// inhomoSIRSGillespie
IntegerVector inhomoSIRSGillespie(IntegerVector startState, int popSize, double startTime, double intervalLength, NumericVector parameters, NumericVector alphas, NumericVector allbreaks);
RcppExport SEXP bayessir_inhomoSIRSGillespie(SEXP startStateSEXP, SEXP popSizeSEXP, SEXP startTimeSEXP, SEXP intervalLengthSEXP, SEXP parametersSEXP, SEXP alphasSEXP, SEXP allbreaksSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type startState(startStateSEXP );
        Rcpp::traits::input_parameter< int >::type popSize(popSizeSEXP );
        Rcpp::traits::input_parameter< double >::type startTime(startTimeSEXP );
        Rcpp::traits::input_parameter< double >::type intervalLength(intervalLengthSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type alphas(alphasSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type allbreaks(allbreaksSEXP );
        IntegerVector __result = inhomoSIRSGillespie(startState, popSize, startTime, intervalLength, parameters, alphas, allbreaks);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// inhomoModPoissonTL
IntegerVector inhomoModPoissonTL(IntegerVector startState, int popSize, double startTime, double intervalLength, NumericVector parameters, NumericVector alphas, NumericVector allbreaks, double deltatint, int ncrit);
RcppExport SEXP bayessir_inhomoModPoissonTL(SEXP startStateSEXP, SEXP popSizeSEXP, SEXP startTimeSEXP, SEXP intervalLengthSEXP, SEXP parametersSEXP, SEXP alphasSEXP, SEXP allbreaksSEXP, SEXP deltatintSEXP, SEXP ncritSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type startState(startStateSEXP );
        Rcpp::traits::input_parameter< int >::type popSize(popSizeSEXP );
        Rcpp::traits::input_parameter< double >::type startTime(startTimeSEXP );
        Rcpp::traits::input_parameter< double >::type intervalLength(intervalLengthSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type alphas(alphasSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type allbreaks(allbreaksSEXP );
        Rcpp::traits::input_parameter< double >::type deltatint(deltatintSEXP );
        Rcpp::traits::input_parameter< int >::type ncrit(ncritSEXP );
        IntegerVector __result = inhomoModPoissonTL(startState, popSize, startTime, intervalLength, parameters, alphas, allbreaks, deltatint, ncrit);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ModPoissonTL
IntegerVector ModPoissonTL(IntegerVector startState, int popSize, double startTime, double intervalLength, NumericVector parameters, double alpha, double deltatint, int ncrit);
RcppExport SEXP bayessir_ModPoissonTL(SEXP startStateSEXP, SEXP popSizeSEXP, SEXP startTimeSEXP, SEXP intervalLengthSEXP, SEXP parametersSEXP, SEXP alphaSEXP, SEXP deltatintSEXP, SEXP ncritSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type startState(startStateSEXP );
        Rcpp::traits::input_parameter< int >::type popSize(popSizeSEXP );
        Rcpp::traits::input_parameter< double >::type startTime(startTimeSEXP );
        Rcpp::traits::input_parameter< double >::type intervalLength(intervalLengthSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< double >::type deltatint(deltatintSEXP );
        Rcpp::traits::input_parameter< int >::type ncrit(ncritSEXP );
        IntegerVector __result = ModPoissonTL(startState, popSize, startTime, intervalLength, parameters, alpha, deltatint, ncrit);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// SMCwithModPossionTL
List SMCwithModPossionTL(IntegerVector observedCounts, NumericVector observedTimes, NumericVector parameters, List alphaBreaks, NumericVector startMeans, int nparticles, int popSize, double reportingRate, double deltatval, int ncrit);
RcppExport SEXP bayessir_SMCwithModPossionTL(SEXP observedCountsSEXP, SEXP observedTimesSEXP, SEXP parametersSEXP, SEXP alphaBreaksSEXP, SEXP startMeansSEXP, SEXP nparticlesSEXP, SEXP popSizeSEXP, SEXP reportingRateSEXP, SEXP deltatvalSEXP, SEXP ncritSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type observedCounts(observedCountsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type observedTimes(observedTimesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP );
        Rcpp::traits::input_parameter< List >::type alphaBreaks(alphaBreaksSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type startMeans(startMeansSEXP );
        Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP );
        Rcpp::traits::input_parameter< int >::type popSize(popSizeSEXP );
        Rcpp::traits::input_parameter< double >::type reportingRate(reportingRateSEXP );
        Rcpp::traits::input_parameter< double >::type deltatval(deltatvalSEXP );
        Rcpp::traits::input_parameter< int >::type ncrit(ncritSEXP );
        List __result = SMCwithModPossionTL(observedCounts, observedTimes, parameters, alphaBreaks, startMeans, nparticles, popSize, reportingRate, deltatval, ncrit);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}