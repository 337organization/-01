n <- 100
prime <- c()
composite <- rep(FALSE, n+1)
for (i in 2:n) {
  if (!composite[i]) {
    prime <- c(prime, i)
  }
  for (j in 1:length(prime)) {
    if (i * prime[j] > n) {
      break
    }
    composite[i * prime[j]] <- TRUE
    if (i %% prime[j] == 0) {
      break
    }
  }
}
prime