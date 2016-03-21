if(!require(Rcpp)) {
	install.packages("Rcpp")
	library(Rcpp)
}

sourceCpp("GCD.cpp")
GCD(326481,237862)
