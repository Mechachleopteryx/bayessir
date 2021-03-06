% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{inhomoSIRSGillespie}
\alias{inhomoSIRSGillespie}
\title{Modified inhomogeneous Gillespie algorithm}
\usage{
inhomoSIRSGillespie(startState, popSize, startTime, intervalLength, parameters,
  alphas, allbreaks)
}
\arguments{
\item{startState}{Integer vector of size two containing the initial number of susceptible and infected individuals respectively}

\item{popSize}{Population size}

\item{startTime}{Start time of simulation}

\item{intervalLength}{Length of simulation interval}

\item{parameters}{Numeric vector of size seven containing the current values of the infectious contact rate, the recovery rate, the rate at which immunity is lost, and the powers}

\item{alphas}{Numeric vector containing the values of alpha}

\item{allbreaks}{Numeric vector containing the times at which the value of alpha changes}
}
\value{
Vector containing number of susceptible and infected at the end of the simulation interval
}
\description{
Uses a modified Gillespie algorithm to simulate the numbers of susceptible and infected individuals forward in time when value of environmental force of infection changes
}

