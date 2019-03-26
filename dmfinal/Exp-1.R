library(rattle)
library(randomForest)
library(tidyr)
library(ggplot2)
library(dplyr)
library(lubridate)
library(FSelector)

dspath <- "/Users/sajjadsalaria/CSmajor/RDataMining/weather.csv"
weather <- read.csv(dspath)
dsname <- "weather"
ds <- get(dsname)       # generic name

dim(ds)
names(ds)
str(ds)

# Step 1:  Convience of the Table Data Frame

class(ds)
ds <- tbl_df(ds)
class(ds)

# Step 2: Review - Observations 

head(ds)
tail(ds)

ds[sample(nrow(ds), 6), ]   # sample creates random indices here (6)

# Step 2: Review Structure

str(ds)

# Step 2: Review Summary 

summary(ds)

#  Step 2: Review - Data Formats

sapply(ds, class)

# Convert factor into data variable
library(lubridate)
head(ds$date)
ds$date <- ymd(as.character(ds$date))
head(ds$date)
sapply(ds, class)








