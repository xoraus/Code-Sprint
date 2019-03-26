dsA
dim(dsA)
names(dsA)
str(dsA)

sapply(dsA, class)


treatment = CO2$Treatment
type = CO2$Type
conc = CO2$conc
uptake = CO2$uptake

treatmentINnum = as.numeric(treatment)
typeINnum = as.numeric(type)

plot(uptake, conc, main="CO2 data as scatterplot",
     type = "p", xlab = "uptake", ylab = "conc", pch=15)


correlation_coeffA <- cor.test(uptake, conc)
correlation_coeffA
