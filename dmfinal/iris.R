#Reference - https://rstudio-pubs-static.s3.amazonaws.com/181052_021d0b311a004e2ab75f0897c3735a35.html

#Data processing - Zanin Pavel

# and http://github.com/fazlerabbi/R-Tutorial/blob/master/data_preparation.Rmd

# http://www.sthda.com/english/wiki/r-built-in-data-sets

data()

data("iris")

head(iris)

# i used Rstudio versiom 1.1.463 and R 3.5.1



library(rattle)

library(tidyr)

library(ddplot)

library(dplyr)

library(lubridate)

library(ggplot2)



dspath <- "C:\\Users\\16z347\\Desktop\\Weather.csv"

Weather <- read.csv(dspath)

dsname <- "Weather"

ds <- get(dsname)



dim(ds)

names(ds)



str(Weather)

head(Weather)

tail(ds)

Weather[sample(nrow(Weather),6),]

summary(Weather)



class(ds)

ds <- tbl_df(ds)

class(ds)

ds



names(ds)

names(ds) <- rattle::normVarNames(names(ds))

names(ds)



sapply(ds,class)



library(lubridate)



x<-c("09-01-01","09-01-02","09-01-03")

ymd(x)

mdy(x)



head(ds$date)

ds$date <- ymd(as.character(ds$date))

head(ds$date)

sapply(ds,class)



print(names(ds))

vars(names(ds)) #changes on the dataset has to be done in vars



target<-"rain_tomorrow"

risk<-"risk_mm"

id<-c("date","location")



ignore<-union(id,if(exists("risk"))risk)

mvc <- sapply(ds[vars], function(x) sum(is.na(x)))

mvc

mvn<-names(ds)[(which(mvc == nrow(ds)))]

mvn



factors <- which(sapply(ds[vars], is.factor))

lvls <- sapply(factors, function(x) length(levels(ds[[x]])))

(many <- names(which(lvls = 20)))

ignore <- union(ignore,many)



(constants <- names(which(sapply(ds[vars],function(x) all(x == x[1L])))))

ignore <- union(ignore,constants)



dim(ds)

sum(is.na(ds[target]))

ds <- ds[!is.na(ds[target]),]

sum(is.na(ds[target]))

dim(ds)



length(vars)

vars <- setdiff(vars,ignore)

length(vars)







ignore<-union(ignore,mvn)

df<-data.frame[,3]

