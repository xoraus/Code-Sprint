ds <- get("faithful")

ds

duration = faithful$eruptions
waiting = faithful$waiting

sapply(ds, class)

correlation_coeff <- cor(duration, waiting)
correlation_coeff

plot(duration, waiting, main="Faithful data as data as scatterplot",
     type = "p", xlab = "duration", ylab = "waiting", pch=15)