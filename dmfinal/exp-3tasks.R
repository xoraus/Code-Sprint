dsB <- get("ChickWeight")

dim(dsB)
names(dsB)
str(dsB)

class(dsB)

weight = ChickWeight$weight
time = ChickWeight$Time
sapply(dsB, class)

correlation_coeff <- cor(weight, time)
correlation_coeff

plot(weight, time, main="ChickWeight data as data as scatterplot",
     type = "p", xlab = "Time", ylab = "Weight", pch=15)
