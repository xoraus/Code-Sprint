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



correlation_coeffA <- cor.test(conc, treatmentINnum)
correlation_coeff

correlation_coeffB <- cor.test(conc, uptake)
correlation_coeffB