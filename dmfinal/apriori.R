#Apriori with input dataset as follows:
# Groceries.csv
library(arules)

#loading dataset

groceries <- read.csv("\Groceries.csv") 

#splitting as items and tid

trans <- as(split(groceries[,"tid"],groceries[,"items"]), "transactions")

inspect(trans)

#apriori and generating rules

basket_rules <- apriori(
  
  trans,
    #test with minlen 3, 4 ,1  etc
  #also test with varying sup and conf

  parameter = list(minlen=2, sup = 0.004, conf = 0.3) 
  #appearance = list(rhs=c("Admit=Rejected"),
  #                  default="lhs"),
)
basket_rules
#sort rules by confidence
basket_rules.sorted<-sort(basket_rules, by="conf")

inspect(basket_rules) 

