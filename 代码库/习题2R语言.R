sort_vector <- function(x) {  
sorted_x <- numeric(length(x))
for (i in seq_along(x)) {       
smallest_index <- which.min(x)
smallest_value <- x[smallest_index]
sorted_x[i] <- smallest_value
x[smallest_index] <- max(x) + 1 
}
return(sorted_x)
}
x <- c(1, 3.5, 2.7, 6, 4.8)
sorted_x <- sort_vector(x)
print(sorted_x)